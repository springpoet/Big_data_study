using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp04
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            panel_side.Height = button3.Height;
            panel_side.Top=button3.Top;
            firstControl1.BringToFront();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Dispose();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
            panel_side.Height = button4.Height;
            panel_side.Top = button4.Top;
            secondControl1.BringToFront();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            panel_side.Height = button3.Height;
            panel_side.Top = button3.Top;
            firstControl1.BringToFront();
        }
        
        private void myClickEvent(object sender, EventArgs e)
        {
            //object : 모든 객체의 조상
            Button btn = (sender as Button);
            panel_side.Height = btn.Height;
            panel_side.Top = btn.Top;
        }
    }
}
