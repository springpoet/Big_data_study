using System;
using System.Collections.Generic;
using System.Data;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ParkingCarManager
{
    //컨트롤러 같은 부분
    public class DataManager
    {
        //저장하는 리스트
        public static List<ParkingCar> Cars = new List<ParkingCar>();

        //정적 생성자, 딱 한번만 호출
        static DataManager()
        {
            Load();
        }
        public static void Load()
        {
            try
            {
                DBHelper.selectQuery();
                Cars.Clear();
                foreach (DataRow item in DBHelper.dt.Rows)
                {
                    ParkingCar car = new ParkingCar();
                    car.ParkingSpot = int.Parse(item["parkingspot"].ToString());
                    car.carNumber = item["carnumber"].ToString();
                    car.driverName = item["drivername"].ToString();
                    car.phoneNumber = item["phonenumber"].ToString();
                    car.parkingTime = item["parkingtime"].ToString() == "" ? new DateTime() : DateTime.Parse(item["parkingtime"].ToString());
                    Cars.Add(car);
                }

            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message+"load");
                printLog(e.StackTrace + "load");
            }
        }
        //로그 남기는 함수
        public static void printLog(string contents)
        {
            //ParkiingHistoy 폴더
            DirectoryInfo di = new DirectoryInfo("ParkingHistory");
            if (di.Exists == false)
            {
                di.Create();
            }
            //ParkingHistory 폴더 안에 ParkingHistory.txt에 글을 쓴 것.
            //끝의 true는 append 한다는 의미. 새로운 내용을 뒤에 추가한다.
            using (StreamWriter w = new StreamWriter("ParkingHistory\\ParkngHistory.txt", true))
            {
               w.WriteLine(contents);
            }
        }

        //1. 주차 출차용 Save
        public static void Save(string parkingSpotText, string carNumber, string driverName, string phoneNumber, bool isRemove = false)
        {
            try
            {
                DBHelper.updateQuery(parkingSpotText, carNumber, driverName, phoneNumber, isRemove);
            }
            catch (Exception)
            {
            }
        }
        //2. 주차 공간 추가/삭제용 Save (오버로딩)
        //매개변수의 갯수와 타입이 다름
        public static bool Save(string command, string parkingSpot, out string contents)
        {
            //out ref 차이
            //ref : 그 값의 참조값 읽음 ref에 해당하는 값이 바뀌면 함수 바깥에서도 바뀜

            //여기서 공간이 있는지 없는지 체크함
            DBHelper.selectQuery(int.Parse(parkingSpot));
            contents = "";
            if (command == "insert")
            {
                return DBInsert(parkingSpot, ref contents);
            }
            else
            {
                return DBDelete(parkingSpot, ref contents);
            }
        }

        private static bool DBDelete(string parkingSpot, ref string contents)
        {
            //throw new NotImplementedException();
            if (DBHelper.dt.Rows.Count != 0) //공간 삭제 가능
            {
                DBHelper.deleteQuery(parkingSpot);
                contents = $"주차 공간 {parkingSpot}이/가 삭제되었습니다.";
                return true;
            }
            else //삭제 안됨
            {
                contents = $"주차 공간이 없습니다.";
                return false;
            }
        }

        private static bool DBInsert(string parkingSpot, ref string contents)
        {
            //throw new NotImplementedException();
            if(DBHelper.dt.Rows.Count == 0) //공간 추가 됨
            {
                DBHelper.insertQuery(parkingSpot);
                contents = $"주차공간 {parkingSpot}이/가 추가되었습니다.";
                return true;
            }
            else //공간 추가 안됨
            {
                contents = $"해당 공간이 이미 있습니다.";
                return false;
            }
        }

        //공간 추가 / 삭제용 함수

    }
}
