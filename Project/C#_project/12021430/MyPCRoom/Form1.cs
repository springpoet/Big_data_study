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
        public Main()
        {
            InitializeComponent();
            

            foreach (var item in panel1.Controls)
            {
             
                if(item is Button)
                {
                    // button의 Name 값을 split 해서 button "1번, 2번, 3번" 등 이런식으로 적히게 만들기3
                    Button btn = item as Button;
                    string[] a = btn.Name.Split('n');
                    int num;
                    int.TryParse(a[1], out num);
                    btn.Text = num.ToString() + "번";
                    //if(num == 0)
                    //{
                    //    num += 100;
                    //}

                    //if (int.Parse(a[1]) <= 21)
                    //{
                    //    btn.Name = a[1] + "번";
                    //}

                }
                
            }



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
        }

        private void button24_Click(object sender, EventArgs e)
        {
            // 회원 조회
            DataManager.Load(); //누르자마자 데이터 다 불러옴. 초기화 안누르고 꺼도 됨 
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
            click_status(sender,e);

            Button Para = sender as Button;
            countLabel.Text = "";
            countLabel.Text = Para.Text;
            pcNumberLabel.Text = Para.Text + "컴퓨터";
            try
            {
                //foreach (var item in )
                //{

                //}
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        void click_status(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            foreach (var item in DataManager.Cars)
            {
                //MessageBox.Show(btn.Text.Substring(0, 1).ToString());
                string[] a = btn.Text.Split('번');
                if (item.Seat_num.Equals(a[0]))
                {

                    userIdLabel.Text = item.User_id.ToString();

                    User_Name.Text = item.Name;
                    //statuslabel.text = item.using_status;
                    //useridlabel.text = item.user_id;
                    //loggedintimelabel.text = item.start_time.tostring();
                    //usedtimelabel.text = item.use_time;
                    //remainingtimelabel.text = item.late_time;
                    goto A;
                }
                

            }
            userIdLabel.Text = "";
            User_Name.Text = "";
        A:;
        }
    }
}
