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
    }
}
