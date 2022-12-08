﻿using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.TaskbarClock;

namespace MyPCRoom
{
    public class DBHelper
    {
        private static SqlConnection conn = new SqlConnection();
        public static SqlDataAdapter da;
        public static DataSet ds;
        public static DataTable dt;

        private static void ConnectDB()
        {
            // 외부 PC 연결 후 DB 사용
            // table 명 "PCRoom"
            try
            {
                string connect = string.Format("Data Source={0};" +
                "Initial Catalog = {1};" +
                "Persist Security Info = True;" +
                "User ID=User1;Password=1234",
                "192.168.0.95,1433", "MYDB");
                conn = new SqlConnection(connect);
                conn.Open();
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex);
                Console.WriteLine("connect Fail");
            }

            // Local일 경우 ------- table 명 "PCRoom22" --------

            //string dataSource = "local";
            //string db = "MYDB";
            //string security = "SSPI";
            //conn.ConnectionString = string.Format("Data Source=({0}); initial Catalog={1};" +
            //    "integrated Security = {2}; Timeout = 3", dataSource, db, security);

            //conn = new SqlConnection(conn.ConnectionString);
            //conn.Open();

        }

        public static void selectQuery()
        {
            try
            {
                ConnectDB(); // DB연결
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;  // 어디에 커맨드 보낼지 지정
                cmd.CommandText = "select * from PCRoom";

                da = new SqlDataAdapter(cmd);
                ds = new DataSet();
                da.Fill(ds, "PCRoom");
                dt = ds.Tables[0];
            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message + "select");
                // DataManager.pringLog(e.StackTrace);
                return;

            }
            finally
            {
                conn.Close(); // DB연결 해제
            }

        }




        public static void userAddQuery(string user_id, string user_name)
        {
            string sqlcommand = "";


            sqlcommand = "insert into PCRoom(user_id, name) values (@p1,@p2)";


            try
            {
                ConnectDB();
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;
                cmd.CommandType = CommandType.Text;
                cmd.Parameters.AddWithValue("@p1", user_id);
                cmd.Parameters.AddWithValue("@p2", user_name);

                // DB에 저장하는 명령어
                cmd.CommandText = sqlcommand;
                cmd.ExecuteNonQuery();
            }
            catch (Exception e)
            {

            }
            finally
            {
                conn.Close();
            }
        }


        public static void addTime(string user_id, string seat_num, string time)
        {
            ConnectDB();
            SqlCommand cmd = new SqlCommand();
            cmd.Connection = conn;
            cmd.CommandType = CommandType.Text;

            // 회원가입이 안된 사람이면 시간 추가를 할 수 없게 해야함
            // insert를 하기 전에 회원테이블이 회원가입이 된지 확인
            // 기존 시간 + 되게 하기    

            string sqlcommand = "";
            // 아이디, 이름, 좌석번호, 시간

            try
            {
                // if(Late_time > 0)
                // SELECT DATE_ADD(NOW(), INTERVAL 1 MINUTE);  // date 타입에 시간을 추가할 수 있는 명령어

                sqlcommand = "update PCRoom set Seat_num=@p3, Late_time = @p4, Start_Time = @p5, Using_Status ='ON' where user_id=@p6";

                cmd.Parameters.AddWithValue("@p3", seat_num);
                cmd.Parameters.AddWithValue("@p4", time);
                //cmd.Parameters.AddWithValue("@p4", DATEADD(NOW(), INTERVAL 1 MINUTE));
                cmd.Parameters.AddWithValue("@p5", DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss"));
                cmd.Parameters.AddWithValue("@p6", user_id);

                // DB에 저장하는 명령어
                cmd.CommandText = sqlcommand;
                cmd.ExecuteNonQuery();
            }
            catch (Exception ex)
            {

                System.Windows.Forms.MessageBox.Show(ex.Message);
            }
            finally
            {
                conn.Close();
                System.Windows.Forms.MessageBox.Show("실해으");
            }
        
        }

        public static void Update_Time(string user_id, string seat_num, string time, string status)
        {
            ConnectDB();
            SqlCommand cmd = new SqlCommand();
            cmd.Connection = conn;
            cmd.CommandType = CommandType.Text;

            // 회원가입이 안된 사람이면 시간 추가를 할 수 없게 해야함
            // insert를 하기 전에 회원테이블이 회원가입이 된지 확인
            // 기존 시간 + 되게 하기    

            string sqlcommand = "";
            // 아이디, 이름, 좌석번호, 시간
            if (status == "ON")
            {


                try
                {
                    // if(Late_time > 0)
                    // SELECT DATE_ADD(NOW(), INTERVAL 1 MINUTE);  // date 타입에 시간을 추가할 수 있는 명령어

                    sqlcommand = "update PCRoom set Seat_num=@p3, Late_time = @p4, Using_Status ='ON' where user_id=@p6";

                    cmd.Parameters.AddWithValue("@p3", seat_num);
                    cmd.Parameters.AddWithValue("@p4", time);
                    //cmd.Parameters.AddWithValue("@p4", DATEADD(NOW(), INTERVAL 1 MINUTE));
                    //cmd.Parameters.AddWithValue("@p5", DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss"));
                    cmd.Parameters.AddWithValue("@p6", user_id);

                    // DB에 저장하는 명령어
                    cmd.CommandText = sqlcommand;
                    cmd.ExecuteNonQuery();
                }
                catch (Exception ex)
                {

                    System.Windows.Forms.MessageBox.Show(ex.Message);
                }
                finally
                {
                    conn.Close();
                    //System.Windows.Forms.MessageBox.Show("실해으");
                }


            }
            else if (status == "OFF")
            {

                try
                {
                    // if(Late_time > 0)
                    // SELECT DATE_ADD(NOW(), INTERVAL 1 MINUTE);  // date 타입에 시간을 추가할 수 있는 명령어

                    sqlcommand = "update PCRoom set Seat_num=@p3, Late_time = @p4, Using_Status ='OFF' where user_id=@p6";

                    cmd.Parameters.AddWithValue("@p3", seat_num);
                    cmd.Parameters.AddWithValue("@p4", time);
                    //cmd.Parameters.AddWithValue("@p4", DATEADD(NOW(), INTERVAL 1 MINUTE));
                    //cmd.Parameters.AddWithValue("@p5", DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss"));
                    cmd.Parameters.AddWithValue("@p6", user_id);

                    // DB에 저장하는 명령어
                    cmd.CommandText = sqlcommand;
                    cmd.ExecuteNonQuery();
                }
                catch (Exception ex)
                {

                    System.Windows.Forms.MessageBox.Show(ex.Message);
                }
                finally
                {
                    conn.Close();
                    //System.Windows.Forms.MessageBox.Show("OFF실행");
                }





            }
        }




        public static void addTime(string user_id, string time)
        {
            ConnectDB();
            SqlCommand cmd = new SqlCommand();
            cmd.Connection = conn;
            cmd.CommandType = CommandType.Text;

            string sqlcommand = "";
            // 아이디, 이름, 좌석번호, 시간
            int time_1 = 0;
            foreach (var item in DataManager.Users)
            {
                if (item.User_id == user_id)
                {
                    System.Windows.Forms.MessageBox.Show(time);
                    System.Windows.Forms.MessageBox.Show(item.Late_time);
                    if (item.Late_time == "")
                    {
                        item.Late_time = "0";
                    }
                    time_1 = int.Parse(item.Late_time) + int.Parse(time);
                    System.Windows.Forms.MessageBox.Show(time_1.ToString());
                }
            }



            try
            {
                sqlcommand = "update PCRoom set Late_time = @p4, Start_Time = @p5 where user_id=@p6";

                //cmd.Parameters.AddWithValue("@p3", seat_num);
                cmd.Parameters.AddWithValue("@p4", time_1);
                cmd.Parameters.AddWithValue("@p5", DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss"));
                cmd.Parameters.AddWithValue("@p6", user_id);

                // DB에 저장하는 명령어
                cmd.CommandText = sqlcommand;
                cmd.ExecuteNonQuery();
            }
            catch (Exception ex)
            {

                System.Windows.Forms.MessageBox.Show(ex.Message);
            }
            finally
            {
                conn.Close();
                System.Windows.Forms.MessageBox.Show("실해으");
            }

        }
    
        public static void userDeleteQuery(string user_id)
        {
            // 유저 삭제 코드
            // form 3
            string sqlcommand = "";

            sqlcommand = "delete from PCRoom where user_id=@p1";
            try
            {
                ConnectDB();
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;
                cmd.CommandType = CommandType.Text;
                cmd.Parameters.AddWithValue("@p1", user_id);

                cmd.CommandText = sqlcommand;
                cmd.ExecuteNonQuery();
            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message + "userDeleteQuery Error");
            }
            finally
            {
                conn.Close();
            }
        }

        // user_id로 찾기
        public static void searchIdQuery(string user_id)
        {
            // form4
            try
            {
                ConnectDB(); // DB연결
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;  // 어디에 커맨드 보낼지 지정
                cmd.CommandText = "select * from PCRoom where User_id=@p1";

                cmd.Parameters.AddWithValue("@p1", user_id);
                da = new SqlDataAdapter(cmd);
                ds = new DataSet();
                da.Fill(ds, "PCRoom");
                dt = ds.Tables[0];
            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message + "DBHelper.searchQuery Error");
                return;
            }
            finally
            {
                conn.Close(); // DB연결 해제
            }

        }
        public static void searchNameQuery(string Name)
        {
            // form4
            try
            {
                ConnectDB(); // DB연결
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;  // 어디에 커맨드 보낼지 지정
                cmd.CommandText = "select * from PCRoom where Name=@p1";

                cmd.Parameters.AddWithValue("@p1", Name);
                da = new SqlDataAdapter(cmd);
                ds = new DataSet();
                da.Fill(ds, "PCRoom");
                dt = ds.Tables[0];
            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message + "DBHelper.searchQuery Error");
                return;
            }
            finally
            {
                conn.Close(); // DB연결 해제
            }

        }

        public static void db_save_quite(string user_id, string late_time)
        {
            // 사용종료 버튼
            ConnectDB();
            SqlCommand cmd = new SqlCommand();
            cmd.Connection = conn;
            cmd.CommandType = CommandType.Text;

            string sqlcommand = "";

            try
            {
                sqlcommand = "update PCRoom set Late_time=@p1, Using_status='OFF', Seat_num='', start_time = NULL where User_id=@p2";
                cmd.Parameters.AddWithValue("@p1", late_time);
                cmd.Parameters.AddWithValue("@p2", user_id);
                cmd.CommandText = sqlcommand;
                cmd.ExecuteNonQuery();
            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message + " DBHelper.db_save_quite error");
            }
        }

        public static void Current_info_save()
        {
            ConnectDB();
            SqlCommand cmd = new SqlCommand();
            cmd.Connection = conn;
            cmd.CommandType = CommandType.Text;

            string sqlcommand = "";
            // 아이디, 이름, 좌석번호, 시간

            try
            {
                // if(Late_time > 0)
                // SELECT DATE_ADD(NOW(), INTERVAL 1 MINUTE);  // date 타입에 시간을 추가할 수 있는 명령어

                sqlcommand = "update PCRoom set Seat_num=@p3, Late_time = @p4, Start_Time = @p5, Using_Status ='ON' where user_id=@p6";

                //cmd.Parameters.AddWithValue("@p3", seat_num);
                //cmd.Parameters.AddWithValue("@p4", time);
                ////cmd.Parameters.AddWithValue("@p4", DATEADD(NOW(), INTERVAL 1 MINUTE));
                //cmd.Parameters.AddWithValue("@p5", DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss"));
                //cmd.Parameters.AddWithValue("@p6", user_id);

                // DB에 저장하는 명령어
                cmd.CommandText = sqlcommand;
                cmd.ExecuteNonQuery();
            }
            catch (Exception ex)
            {

                System.Windows.Forms.MessageBox.Show(ex.Message);
            }
            finally
            {
                conn.Close();
                System.Windows.Forms.MessageBox.Show("실해으");
            }


        }

        public static void UserLoginQuery(string user_id, string seat_num)
        {
            ConnectDB();
            SqlCommand cmd = new SqlCommand();
            cmd.Connection = conn;
            cmd.CommandType = CommandType.Text;

            string sqlcommand = "";
            try
            {
                sqlcommand = "update PCRoom set Using_status='ON', Seat_num=@p1, Start_time = @p3 where User_id=@p2";
                cmd.Parameters.AddWithValue("@p1", seat_num);
                cmd.Parameters.AddWithValue("@p2", user_id);
                cmd.Parameters.AddWithValue("@p3", DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss"));
                cmd.CommandText = sqlcommand;
                cmd.ExecuteNonQuery();

            }
            catch (Exception e)
            {
                System.Windows.Forms.MessageBox.Show(e.Message + " DBHelper.UserLoginQuery Error.");
            }
        }


    }
}
