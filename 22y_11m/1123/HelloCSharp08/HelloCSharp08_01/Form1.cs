using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp08_01
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
            products.Add(new Product() { Id = 1, price = 1000, Name = "potato" });
            products.Add(new Product() { Id = 2, price = 500, Name = "spring onion" });
            products.Add(new Product() { Id = 3, price = 100, Name = "jelly" });

            products.Sort();
            
            foreach (Product p in products)
            {
                MessageBox.Show($"{p.Name}");
            }
        }
    }
}
