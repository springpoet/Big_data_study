using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp04_01
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            int ascii = 44032;
            char code=Convert.ToChar(ascii);
            Console.WriteLine(code);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            for(int i = 44032; i < 55204; i++)
            {
                char code = Convert.ToChar(i);
                Console.Write(code);
            }
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            for (int i = 44032; i < 55204; i++)
            {
                char code = Convert.ToChar(i);
                Console.Write(code);
                textBox1.Text += $"{code}";
                
            }
        }
    }

}
