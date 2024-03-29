﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp10_03
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

            List<int> list = new List<int>() { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

            var output = from item in list select item * item;

            foreach (var item in output)
            {
                label1.Text += item + " ";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            label2.Text = "";
            List<int> list = new List<int>() { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

            var output = from item in list where item % 2 == 0 select item;
            foreach (var item in output)
            {
                label2.Text += item + " ";
            }

            int[] a = output.ToArray<int>();
            List<int> b = output.ToList<int>();

        }
    }
}
