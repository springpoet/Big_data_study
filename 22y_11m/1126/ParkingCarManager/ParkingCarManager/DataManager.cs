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
        public static List<ParkingCar> cars = new List<ParkingCar>();

        //정적 생성자, 딱 한번만 호출
        static DataManager()
        {
            Load();
        }
        public static void Load()
        {

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
    }
}
