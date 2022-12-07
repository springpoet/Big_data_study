﻿using System;
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
    public partial class Form2 : Form
    {
        //Main form = new Main();
        public static List<Button> SortedButton = new List<Button>();
        Main form1;
        public Form2(Main form)
        {
            InitializeComponent();
            form1 = form;
            //MessageBox.Show(SortedButton[0].Text);
            //MessageBox.Show(SortedButton[1].Text);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //MessageBox.Show(SortedButton[1].Text);
            int hours;
            int minutes;
            int seconds;
            string text;
            string[] time;
            int realtime;
            if(textBox3.Text == "")
            {
                DBHelper.addTime(textBox1.Text, textBox4.Text);

            }
            //시간 추가 없이 바로 로그인 할 때
            else if(textBox2.Text=="" &&textBox4.Text=="") {
                try
                {
                    PC_User user = DataManager.Users.Single(x => x.User_id == textBox1.Text);
                    DBHelper.UserLoginQuery(user.User_id, textBox3.Text);
                    MessageBox.Show($"'{user.Name}' 회원이 사용을 시작하였습니다.");
                    form1.Current_userinfo_save();
                    DataManager.Load();
                    form1.Refresh_btn();
                    Dispose();
                }
                catch (Exception ee)
                {
                    MessageBox.Show(ee.Message + " form2.ksgquery error");
                }
            }
            else
            {
                foreach(var item in DataManager.Users)
                {
                    if(item.Seat_num == textBox3.Text && item.Using_status == "ON")
                    {

                        text = SortedButton[int.Parse(item.Seat_num)-1].Text;
                        
                        //text = form.text_call(int.Parse(item.Seat_num));

                        //MessageBox.Show(text);
                        time = (text).Split('\n');

                        int.TryParse(time[3].Split(':')[0], out hours);

                        int.TryParse(time[3].Split(':')[1], out minutes);
                        int.TryParse(time[3].Split(':')[2], out seconds);
                        //MessageBox.Show(hours.ToString()+"시간" + minutes.ToString() +"분" + seconds.ToString() + "초");
                        //MessageBox.Show(minutes.ToString());
                        //MessageBox.Show(seconds.ToString());

                        realtime = hours * 3600 + minutes * 60 + seconds + int.Parse(textBox4.Text);

                        MessageBox.Show(realtime.ToString());
                        DBHelper.addTime(textBox1.Text, textBox3.Text, realtime.ToString());

                        hours = realtime / 3600;
                        minutes = realtime %3600 / 60;
                       
                        //if(seconds >= 60)
                        //{
                        //    seconds -= 60;
                        //    minutes++;
                        //}
                        //if (minutes >= 60)
                        //{
                        //    minutes -= 60;
                        //    hours++;
                        //}
                        seconds = realtime % 60;

                        SortedButton[int.Parse(item.Seat_num) - 1].Text = $"{time[0]}\n{time[1]}\n남은시간\n{hours}:{minutes}:{seconds}";
                    }
                    else
                    {

                    }


                }

                //if (DataManager.SortedUsers[int.Parse(textBox1.Text)].Using_status == "ON")
                //{
                //    text = SortedButton[int.Parse(DataManager.SortedUsers[int.Parse(textBox1.Text)].Seat_num)].Text;
                //    //text = form.text_call(int.Parse(textBox3.Text));

                //    string[] time = (text).Split('\n');

                //    int.TryParse(time[3].Split(':')[0], out hours);
                    
                //    int.TryParse(time[3].Split(':')[1], out minutes);
                //    int.TryParse(time[3].Split(':')[2], out seconds);
                //    MessageBox.Show(hours.ToString());
                //    MessageBox.Show(minutes.ToString());
                //    MessageBox.Show(seconds.ToString());

                //    realtime = hours * 3600 + minutes * 60 + seconds;
                //    DBHelper.addTime(textBox1.Text ,textBox3.Text, realtime.ToString());

                //}
            }


        
        
        }


    }
}
