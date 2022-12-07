using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MyPCRoom
{
    public partial class Main : Form
    {
        public static List<Button> Btn_panel = new List<Button>();
        public static List<Button> SortedButton = new List<Button>();
        public static List<Timer> Timers = new List<Timer>();
        public int hours = 0;
        public int minutes = 0;
        public int seconds = 0;
        public static int seat_num = 0;

        public Main()
        {
            InitializeComponent();
            //timer1.Enabled = true;
            Timers.Add(timer1);
            Timers.Add(timer2);
            Timers.Add(timer3);
            Timers.Add(timer4);
            Timers.Add(timer5);
            Timers.Add(timer6);
            Timers.Add(timer7);
            Timers.Add(timer8);
            Timers.Add(timer9);
            Timers.Add(timer10);
            Timers.Add(timer11);
            Timers.Add(timer12);
            Timers.Add(timer13);
            Timers.Add(timer14);
            Timers.Add(timer15);
            Timers.Add(timer16);
            Timers.Add(timer17);
            Timers.Add(timer18);
            Timers.Add(timer19);
            Timers.Add(timer20);
            Timers.Add(timer21);
            //

            try
            {
                foreach (var item in panel1.Controls)
                {

                    if (item is Button)
                    {

                        Button btn = item as Button;
                        string[] a = btn.Name.Split('n');
                        int num;
                        int.TryParse(a[1], out num);
                        //btn.Name = "Seat_" + num.ToString();
                        btn.Text = num.ToString() + "번";
                        Btn_panel.Add(btn);
                    }

                }

                SortedButton = Btn_panel.OrderBy(x => int.Parse(x.Name.Split('n')[1])).ToList();
                //MessageBox.Show(SortedButton[0].Text);
            }
            catch (Exception e)
            {
                MessageBox.Show("오류남");
                MessageBox.Show(e.Message);
                MessageBox.Show(e.StackTrace);

            }
            Refresh_All();
            //int second1 = 0;



            Form2.SortedButton = SortedButton;
        }

        public void Refresh_All()
        {
            try
            {
                foreach (var item in DataManager.Users)
                {
                    if (item.Using_status == "ON")
                    {
                        foreach (var btn in panel1.Controls)
                        {
                            if (btn is Button)
                            {
                                Button button = btn as Button;
                                string[] seat = button.Name.Split('n');
                                //MessageBox.Show(item.Seat_num);
                                if (item.Seat_num == seat[1])
                                {
                                    int.TryParse(item.Late_time, out int num);
                                    int hours;
                                    int minutes;
                                    int seconds;
                                    hours = num / 3600;
                                    minutes = num % 3600 / 60;
                                    seconds = num % 60;



                                    button.Text = $"이름 : {item.Name}\n아이디 : {item.User_id}\n남은시간\n{hours}:{minutes}:{seconds}";
                                    Timers[int.Parse(seat[1]) - 1].Enabled = true;
                                    //button.Text = $"이름 : {item.Name}\n아이디 : {item.User_id}\n남은시간\n{item.Late_time}";
                                }
                                //int.TryParse(item.Late_time,out second1);
                                //timer1.Enabled = true;
                                //timer1_Tick += DecreaseSeconds();
                            }
                        }
                    }





                }
            }
            catch (Exception e)
            {
                MessageBox.Show("오류남");
                MessageBox.Show(e.Message);
                MessageBox.Show(e.StackTrace);
            }
        }


        public string text_call(int num)
        {
            return SortedButton[num].Text;
        }
        private void timer1_Tick(object sender, EventArgs e)
        {
            //int hours;
            //int minutes;
            //int seconds;

            string[] time = (SortedButton[0].Text).Split('\n');


            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[0].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
            //SortedButton[0].Text = $"{time[0]}\n{time[1]}\n남은시간\n{num}";

            //DecreaseSeconds();
            //label6.Text = hours.ToString()+ "___" + minutes.ToString()+ "___" + seconds.ToString();

            //int num = 0;
            //Button btn = sender as Button;
            //int.TryParse(late_time, out num);
            //num--;
            //btn.Text = num.ToString();
        }





        private void pictureBox1_Click(object sender, EventArgs e)
        {
            Dispose();
        }

        private void button22_Click(object sender, EventArgs e)
        {
            // 시간 추가 (add_time)
            Form2 newform = new Form2();
            newform.ShowDialog();
        }

        private void button23_Click(object sender, EventArgs e)
        {
            // 회원추가  
            Form3 newform = new Form3();
            newform.ShowDialog();
        }

        private void button22_Click_1(object sender, EventArgs e)
        {
            // 사용종료
            string late_time;
            string[] text;
            int realtime;
            try
            {
                PC_User user = DataManager.Users.Single(x => x.User_id == userIdLabel.Text);
                late_time = remainingTimeLabel.Text; // 0:0:5 > 5

                //
                text = late_time.Split(':');
                 
                int.TryParse(text[0], out hours);
                int.TryParse(text[1], out minutes);
                int.TryParse(text[2], out seconds);

                realtime = (hours * 3600) + (minutes * 60) + seconds; // 남은 시간
                MessageBox.Show(" 남은 시간 : " + realtime.ToString()); ;
                DBHelper.LateTimeQuery(user.User_id, realtime.ToString());
                MessageBox.Show($"아이디 : '{user.User_id}', 이름 : '{user.Name}' 회원의 사용이 종료되었습니다.");
            }
            catch (Exception ee)
            {
                MessageBox.Show(ee.Message + " Form1.button22_click_1 error");
            }
            finally
            {
                MessageBox.Show(remainingTimeLabel.Text);
                MessageBox.Show(userIdLabel.Text);

            }
        }

        private void button24_Click(object sender, EventArgs e)
        {
            DataManager.Load();
            // 회원 조회
            Form4 newform = new Form4();
            newform.ShowDialog();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            on_off(sender, e);

        }
        // 이 기능들을 함수로 만들어서 필요할 때 호출하는 식으로 변경하기
        // 빨간색일 때

        private void on_off(object sender, EventArgs e)
        {
            //click_status(sender, e);

            Button button = sender as Button;
            countLabel.Text = "";
            countLabel.Text = button.Name.Split('n')[1] + "번컴퓨터";
            string seat = button.Name.Split('n')[1];


            pcNumberLabel.Text = button.Name.Split('n')[1] + "번컴퓨터";

            foreach (var item in DataManager.Users)
            {
                if(item.Seat_num == seat)
                {
                    statusLabel.Text = "ON";
                    userIdLabel.Text = item.User_id.ToString();
                    User_Name.Text = item.Name;
                    loggedInTimeLabel.Text = item.Start_time.ToString();
                    usedTimeLabel.Text = item.Use_time.ToString();
                    remainingTimeLabel.Text = SortedButton[int.Parse(seat) - 1].Text.Split('\n')[3];
                    goto A;
                }
                //else
                //{
                //    userIdLabel.Text = "";
                //    User_Name.Text = "";
                //    loggedInTimeLabel.Text = "";
                //    usedTimeLabel.Text = "";
                //    remainingTimeLabel.Text = "";
                //}
            }
            statusLabel.Text = "OFF";
            userIdLabel.Text = "";
            User_Name.Text = "";
            loggedInTimeLabel.Text = "";
            usedTimeLabel.Text = "";
            remainingTimeLabel.Text = "";
        A:;


        }

        void click_status(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            foreach (var item in DataManager.Users)
            {
                //MessageBox.Show(btn.Text.Substring(0, 1).ToString());
                string[] a = btn.Text.Split('번');
                if (item.Seat_num.Equals(a[0]))
                {
                    userIdLabel.Text = item.User_id.ToString();
                    User_Name.Text = item.Name;
                    loggedInTimeLabel.Text = item.Start_time.ToString();
                    usedTimeLabel.Text = item.Use_time.ToString();
                    remainingTimeLabel.Text = item.Late_time.ToString();
                    goto A;
                }
            }
            userIdLabel.Text = "";
            User_Name.Text = "";
        A:;
        }

        private void button25_Click(object sender, EventArgs e)
        {
            // 지도
            Form5 newform = new Form5();
            newform.ShowDialog();
        }

        private void timer2_Tick(object sender, EventArgs e)
        {

            string[] time = (SortedButton[1].Text).Split('\n');


            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[1].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";

            //btn.Text = num.ToString();
        }

        private void timer3_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[2].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[2].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer4_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[3].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[3].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer5_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[4].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[4].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer6_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[5].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[5].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer7_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[6].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[6].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer8_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[7].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[7].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer9_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[8].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[8].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer10_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[9].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[9].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer11_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[10].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[10].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer12_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[11].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[11].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer13_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[12].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[12].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer14_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[13].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[13].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer15_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[14].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[14].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer16_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[15].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[15].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer17_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[16].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[16].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer18_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[17].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[17].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer19_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[18].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[18].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer20_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[19].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[19].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void timer21_Tick(object sender, EventArgs e)
        {
            string[] time = (SortedButton[20].Text).Split('\n');

            int.TryParse(time[3], out int num);

            int.TryParse(time[3].Split(':')[0], out hours);
            int.TryParse(time[3].Split(':')[1], out minutes);
            int.TryParse(time[3].Split(':')[2], out seconds);
            //num--;
            seconds--;

            if (seconds < 0)
            {
                minutes--;
                seconds = 59;
            }

            if (minutes < 0)
            {
                minutes = 59;
                hours--;
            }

            SortedButton[20].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
        }

        private void button26_Click(object sender, EventArgs e)
        {
            timer3.Enabled = false;
        }

        private void timer22_Tick(object sender, EventArgs e)
        {

        }

        private void button27_Click(object sender, EventArgs e)
        {
            Form6 form = new Form6();
            form.ShowDialog();
        }
    }
}
