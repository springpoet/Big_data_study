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
    public partial class Form2 : Form
    {
        //Main form = new Main();
        public static List<Button> SortedButton = new List<Button>();
        public Form2()
        {
            InitializeComponent();
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

            }else
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
