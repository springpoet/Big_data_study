using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp06_03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MyMath math = new MyMath();
            int result = math.Power(int.Parse(textBox1.Text));
            label1.Text = result.ToString();
        }
        private void button2_Click(object sender, EventArgs e)
        {
            MyMath math = new MyMath();
            int result = math.Power(int.Parse(textBox2.Text), int.Parse(textBox3.Text));
            label2.Text = result.ToString();
        }
        private void button3_Click(object sender, EventArgs e)
        {
            MyMath math = new MyMath();
            int result = math.Multi(int.Parse(textBox4.Text), int.Parse(textBox5.Text));
            label3.Text = result.ToString();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            label1.Text = MyMath2.Power(int.Parse(textBox1.Text)).ToString();
        }

        private void button5_Click(object sender, EventArgs e) 
        {
            label1.Text = MyMath2.Multi(int.Parse(textBox1.Text), int.Parse(textBox2.Text)).ToString();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            label1.Text = MyMath2.Power(int.Parse(textBox1.Text), int.Parse(textBox2.Text)).ToString();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            int.TryParse(textBox1.Text, out int x);
            label1.Text = MyMath3.Power(x).ToString();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            int.TryParse(textBox1.Text, out int x);
            int.TryParse(textBox2.Text, out int y);
            label1.Text = MyMath3.Multi(x, y).ToString();
        }

        private void button9_Click(object sender, EventArgs e)
        {
            int.TryParse(textBox1.Text, out int x);
            int.TryParse(textBox2.Text, out int y);
            label1.Text = MyMath3.Power(x,y).ToString();

        }
    }
}