﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp09_02
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            dataGridView3.Columns.Add("name", "이름");
            dataGridView3.Columns.Add("gender", "성별");

            productBindingSource.Add(new Product() { Name = "감자", Price = 500 });
            productBindingSource.Add(new Product() { Name = "토마토", Price = 700 });
            productBindingSource.Add(new Product() { Name = "젤리", Price = 100 });
        }

        private void button1_Click(object sender, EventArgs e)
        {
            dataGridView3.Rows.Add(textBox1.Text, textBox2.Text);   
        }

        private void button2_Click(object sender, EventArgs e)
        {
            List<Product> products = new List<Product>();
            products.Add(new Product() { Name = "김치", Price = 5000 });
            products.Add(new Product() { Name = "시금치", Price = 990 });
            products.Add(new Product() { Name = "감귤", Price = 3131 });

            dataGridView4.DataSource = null;
            dataGridView4.DataSource = products;
        }
    }
}
