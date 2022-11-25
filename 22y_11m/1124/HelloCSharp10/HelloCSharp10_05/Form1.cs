using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp10_05
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            List<Product> products = new List<Product>();
            products.Add(new Product() { Name = "비빔밥", Price = 5000 });
            products.Add(new Product() { Name = "라면", Price = 1500 });
            products.Add(new Product() { Name = "국밥", Price = 4500 });

            var output = from item in products orderby item.Price select item;

            label1.Text = "";
            foreach (var item in output)
            {
                label1.Text += $"{item.Name}, {item.Price}   ";  
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            List<Product> products = new List<Product>();
            products.Add(new Product() { Name = "비빔밥", Price = 5000 });
            products.Add(new Product() { Name = "라면", Price = 1500 });
            products.Add(new Product() { Name = "국밥", Price = 4500 });

            var output = from item in products where (item.Price>1000) orderby item.Price descending select item;

            label2.Text = "";
            foreach (var item in output)
            {
                label2.Text += $"{item.Name}, {item.Price}   ";
            }
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }
    }
}
