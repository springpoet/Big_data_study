using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Net.Configuration;
using System.Text;
using System.Threading.Tasks;

namespace ParkingCarManager
{
    //DAO 같은 부분
    //CRUD 하는 부분
    public class DBHelper
    {
        //db 연결 부분
        private static SqlConnection conn = new SqlConnection();
        //db에 있는 데이터 가져오는 부분들
        public static SqlDataAdapter da;
        public static DataSet ds;
        public static DataTable dt;

        public static void ConnectDB()
        {
            string dataSource = "local";
            string db = "MYDB";
            string security = "SSPI";
            conn.ConnectionString = string.Format("Data Source=({0}); initial Catalog={1}; " + "integrated Security={2};" + "Timeout=3", dataSource, db, security);
            conn = new SqlConnection(conn.ConnectionString);
            conn.Open();
        }

        //db에서 데이터를 읽어오는 부분
        //selectQuery()=>parkingSpot 값은 1.
        public static void selectQuery(int parkingSpot = -1)
        {
            try
            {
                ConnectDB();// db 연결
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;
                //전체 조회
                if (parkingSpot == -1) 
                {
                    cmd.CommandText = "select * from parkingManager";
                }
                //특정 번호만 조회. 공간추가/삭제/주차/출차 체크 등에 쓰임
                else
                {
                    cmd.CommandText = "select * from parkingManager " + "where parkingSpot =" + parkingSpot;
                }
                da = new SqlDataAdapter(cmd);
                ds = new DataSet();
                da.Fill(ds, "ParkingManager");
                dt = ds.Tables[0];
            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message+"select");
                DataManager.printLog(e.StackTrace);
                return;
            }
            finally
            {
                conn.Close(); //db 연결 해제
            }
        }
        public static void updateQuery(string parkingSpotText, string carNumber, string driverName, string phoneNumber, bool isRemove)
        {
            //isRemove = 주차 및 출차 여부
            try
            {
                ConnectDB();
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;
                cmd.CommandType = CommandType.Text;
                string sqlcommand = "";
                if (isRemove)
                {
                    sqlcommand = "update parkingmanager set carnumber=''," + "drivername='', phonenumber='', parkingtime=null where " + "parkingspot=@p1";
                    //파라메터 값을 @에 실어서 보내는 방식
                    //sql injection 방지를 위함
                    cmd.Parameters.AddWithValue("@p1", parkingSpotText);

                        
                }
                else
                {
                    sqlcommand = "update parkingmanager set carnumber=@p1," + "drivername=@p2, phonenumber=@p3,parkingtime=@p4 where " + "parkingspot=@p5";
                    cmd.Parameters.AddWithValue("@p1", carNumber);
                    cmd.Parameters.AddWithValue("@p2", driverName);
                    cmd.Parameters.AddWithValue("@p3", phoneNumber);
                    cmd.Parameters.AddWithValue("@p4", DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff"));
                    cmd.Parameters.AddWithValue("@p5", parkingSpotText);
                }
                cmd.CommandText = sqlcommand;
                cmd.ExecuteNonQuery();
            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message+"update");
                DataManager.printLog(e.StackTrace + "update");
            }
            finally
            {
                conn.Close();
            }
        }
        private static void executeQuery(string parkingSpot,string command)
        {
            string sqlcommand = "";
            if (command == "insert")
            {
                sqlcommand = "insert into parkingmanager(parkingspot) values (@p1)";
            }
            else
            {
                sqlcommand = "delete from parkingmanager where parkingspot=@p1";
            }
            try
            {
                ConnectDB();
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;
                cmd.CommandType = CommandType.Text;
                cmd.Parameters.AddWithValue("@p1", parkingSpot);
                cmd.CommandText = sqlcommand;
                cmd.ExecuteNonQuery();
            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message+"execute");
                DataManager.printLog(e.StackTrace + "execute");
            }
            finally
            {
                conn.Close();
            }
        }
        public static void deleteQuery(string parkingSpot)
        {
            executeQuery(parkingSpot, "delete");
        }
        public static void insertQuery(string parkingSpot)
        {
            executeQuery(parkingSpot, "insert");
        }
    }
}
