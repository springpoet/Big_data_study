using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Runtime.Remoting.Channels;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MyPCRoom
{
    public class DataManager
    {
        // 자동차들 저장하는 변수
        public static List<PC_User> PcRoom = new List<PC_User>();

        static DataManager()
        {
            Load();
        }


        public static void Load()
        {
            try
            {
                DBHelper.selectQuery();
                PcRoom.Clear();
                foreach (DataRow item in DBHelper.dt.Rows)
                {
                    PC_User pc = new PC_User();
                    // car.carNumber = item[" MS SQL 의 필드명이랑 같아야함  "].ToString();

                    pc.User_id = item["User_id"].ToString();
                    pc.Name = item["Name"].ToString();
                    pc.Using_status = item["Using_status"].ToString();
                    
                    pc.Start_time = item["Start_time"].ToString() == "" ?
                       new DateTime() :
                       DateTime.Parse(item["Start_time"].ToString());

                    pc.Use_time = item["Use_time"].ToString();
                    pc.Late_time = item["Late_time"].ToString();
                    pc.Seat_num = item["Seat_num"].ToString();


                    PcRoom.Add(pc);
                }

            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message + "load");
                //pringLog(e.StackTrace + "load");
            }
        }
        public static void spot_Load()
        {
            try
            {
                DBHelper.selectQuery();
                PcRoom.Clear();
                //if()
            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message+"spot_Load");
                throw;
            }
        }






    }
}
