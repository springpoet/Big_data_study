using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "admin" && textBox2.Text == "1234")
            {
                MessageBox.Show("관리자님 환영합니다");
            }
            if(textBox1.Text=="김성근" && textBox2.Text == "tjdrms")
            {
                MessageBox.Show("반갑습니다 김성근님");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Dispose();
        }



        private void label5_Click(object sender, EventArgs e)
        {
            Hide();
            new Form2(textBox1.Text, textBox2.Text).ShowDialog();
            Show();
        }
    }
}
