using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp09_04
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            dataGridView1.ReadOnly = false;

        }
        List<Student> students = new List<Student>();

        private void button1_Click(object sender, EventArgs e)
        {
            //1.바인딩안한 상태
            //dataGridView1.Rows.Add(textBox1.Text, textBox2.Text,textBox3.Text);
            //2-1.바인딩한 상태 
            //studentBindingSource.Add(new Student() { Name=textBox1.Text, hakbeon=textBox2.Text, gender=textBox3.Text});
            //2-2.바인딩한 상태
            //students.Add(new Student() { Name = textBox1.Text, hakbeon = textBox2.Text, gender = textBox3.Text });
            //dataGridView1.DataSource = null;
            //dataGridView1.DataSource = students;
            
            //students.Add(new Student() { Name=textBox1.Text,hakbeon=textBox2.Text,gender=textBox3.Text});
            //dataGridView1.DataSource = students;
            BindingSource bs= new BindingSource();
            bs.DataSource = students;
            dataGridView1.DataSource = bs;
            bs.Add(new Student() { Name = textBox1.Text, hakbeon = textBox2.Text, gender = textBox3.Text });
            dataGridView1.Refresh();
            
            
            
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";

        }

        private void button2_Click(object sender, EventArgs e)
        {
            dataGridView1.DataSource = null;
            students.Add(new Student() { Name = textBox1.Text, hakbeon = textBox2.Text, gender = textBox3.Text });

            dataGridView1.DataSource = null;
            dataGridView1.DataSource = students;

            //dataGridView1.Rows.Add(textBox1.Text, textBox2.Text, textBox3.Text);
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            BindingSource bs = new BindingSource();
            bs.DataSource = students;
            dataGridView1.DataSource = bs;
            int index = dataGridView1.CurrentCell.RowIndex;
            students.RemoveAt(index);
            bs.DataSource = students;
            dataGridView1.Refresh();
            dataGridView1.DataSource = bs;
            //dataGridView1.DataSource = null;
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
