using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyPCRoom
{
    public class DataManager
    {
        // 자동차들 저장하는 변수
        public static List<PC_User> Cars = new List<PC_User>();

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
                    PC_User car = new PC_User();
                    // car.carNumber = item[" MS SQL 의 필드명이랑 같아야함  "].ToString();

                    car.User_id = item["User_id"].ToString();
                    car.Name = item["Name"].ToString();
                    car.Using_status = item["Using_status"].ToString();
                    
                    car.Start_time = item["Start_time"].ToString() == "" ?
                       new DateTime() :
                       DateTime.Parse(item["Start_time"].ToString());

                    car.Use_time = item["Use_time"].ToString();
                    car.Late_time = item["Late_time"].ToString();
                    car.Seat_num = item["Seat_num"].ToString();
                   

                    Cars.Add(car);
                }

            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message + "load");
                //pringLog(e.StackTrace + "load");
            }
        }
        //회원 삭제 코드
        public static void delete(string user_id)
        {
            try
            {
                DBHelper.userDeleteQuery(user_id);
            }
            catch (Exception)
            {
            }
        }






    }
}
