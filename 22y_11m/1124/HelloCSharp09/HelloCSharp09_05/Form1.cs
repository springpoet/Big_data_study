using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp09_05
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            studentsBindingSource.Add(new Students() { Name = textBox1.Text, hakbeon = textBox2.Text, gender = textBox3.Text });
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //이름으로 찾아서 나머지 값 변경
            string name = textBox1.Text;
            for (int i = 0; i < studentsBindingSource.Count; i++)
            {
                Students s = studentsBindingSource[i] as Students;
                if (s.Name == name)
                {
                    s.hakbeon = textBox2.Text;
                    s.gender = textBox3.Text;
                    studentsBindingSource[i] = s;
                }
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            string name = textBox1.Text;
            for (int i = studentsBindingSource.Count - 1; i >= 0; i--)
            {
                Students s = studentsBindingSource[i] as Students;
                if (s.Name == name)
                {
                    studentsBindingSource.RemoveAt(i);
                }
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            string name = textBox1.Text;
            List<Students> ss = new List<Students>();
            for (int i = 0; i < studentsBindingSource.Count; i++)
            {
                Students s = studentsBindingSource[i] as Students;
                if (s.Name == name)
                {
                    ss.Add(s);
                }
            }
            dataGridView2.DataSource = null;
            dataGridView2.DataSource = ss;
        }
    }
}
