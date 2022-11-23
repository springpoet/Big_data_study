using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp08
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Student<int> s = new Student<int>();
            s.age = 10;
            s.name = "LDJ";
            s.hakbeon = 09;
            MessageBox.Show($"이름 : {s.name}, 나이 : {s.age}, 학번 : {s.hakbeon}");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Student<string> s = new Student<string>("09", "JYT", 20);
            MessageBox.Show($"이름 : {s.name}, 나이 : {s.age}, 학번 : {s.hakbeon}");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            MyHakbeon h = new MyHakbeon("kbschool", 1);
            Student<MyHakbeon> s = new Student<MyHakbeon>(h,"LYN",24);

            Student<MyHakbeon> s2 = new Student<MyHakbeon>(new MyHakbeon("영진", 2), "LDJ", 34);

            Student<MyHakbeon> s3 = new Student<MyHakbeon>();
            s3.name = "KHG";
            s3.age = 40;
            s3.hakbeon = h;
            s3.hakbeon = new MyHakbeon("korea", 3);

            MessageBox.Show($"이름 : {s.name}, 나이 : {s.age},"+ $"학번:{s.hakbeon.name}, {s.hakbeon.number}");
            MessageBox.Show($"이름 : {s2.name}, 나이 : {s2.age}," + $"학번:{s2.hakbeon.name}, {s2.hakbeon.number}");
            MessageBox.Show($"이름 : {s3.name}, 나이 : {s3.age}," + $"학번:{s3.hakbeon.name}, {s3.hakbeon.number}");
        }
    }
}
