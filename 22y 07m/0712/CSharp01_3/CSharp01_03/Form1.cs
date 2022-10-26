using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CSharp01_03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            panelleft.Height = buttonDashboard.Height;
            panelleft.Top = buttonDashboard.Top;
        }

        private void buttonDashboard_Click(object sender, EventArgs e)
        {
            panelleft.Height = buttonDashboard.Height;
            panelleft.Top = buttonDashboard.Top;
        }

        private void buttonSeller_Click(object sender, EventArgs e)
        {
            panelleft.Height = buttonSeller.Height;
            panelleft.Top = buttonSeller.Top;
        }

        private void buttonCalender_Click(object sender, EventArgs e)
        {
            panelleft.Height=buttonCalender.Height;
            panelleft.Top = buttonCalender.Top;
        }

        private void buttonTask_Click(object sender, EventArgs e)
        {
            panelleft.Height =buttonTask.Height;
            panelleft.Top = buttonTask.Top;
        }
    }
}
