using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp10_04
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "";
            label2.Text = "";
            label3.Text = "";
            List<int> age = new List<int>() { 10,20,30,40,50};
            var output = from item in age select new { age = item, money = (item * 100) * 2 };
            var output2 = from item in age select new { age = item, money = (item * 100) * 2 };

           // label3.Text = output2[0].ToString();

            foreach (var item in output)
            {
                label1.Text += item.age.ToString()+" ";
                label2.Text += item.money.ToString()+" ";
            }
        }
    }
}
