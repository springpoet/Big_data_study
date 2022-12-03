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
            foreach (var item in this.Controls)
            {
             
                if(item is Button)
                {
                    // button의 Name 값을 split 해서 button "1번, 2번, 3번" 등 이런식으로 적히게 만들기3
                    Button btn = item as Button;
                    //if(btn.Name.Split() == )

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
            Button Para = sender as Button;
            countLabel.Text = "";
            countLabel.Text = Para.Text;
            try
            {
                if (Para.BackColor == Color.Red)
                {
                    Para.Text = "";
                    Para.Text += "OK   ";
                    Para.Text += "OK"; // 로그인 한 사람 이름을 뜨게 만들자
                }
            }
            catch (Exception ex)
            {

            }
        }


    }
}
