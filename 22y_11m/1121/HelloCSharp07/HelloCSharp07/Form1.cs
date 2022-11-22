using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp07
{
    public partial class Form1 : Form
    {
        void swapFunction(int a, int b)
        {
            int temp = a;
            a = b;
            b = temp;

        }
        void swapFunction(ref int a, ref int b)
        {
            int temp = a;
            a = b;
            b = temp;

        }
        public Form1()
        {
            InitializeComponent();
            int a = 3;
            int b = 5;
            swapFunction(a, b);
            Console.WriteLine($"a={a},b={b}");
            swapFunction(ref a, ref b);
            Console.WriteLine($"a={a},b={b}");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int.TryParse(textBox1.Text, out int a);

            int.TryParse(textBox2.Text, out int b);

            swapFunction(ref a, ref b);
            textBox3.Text = a.ToString();

            textBox4.Text = b.ToString();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            label1.Text = DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff");
        }
    }
   
    
}
