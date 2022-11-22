using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp07_02
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Cat c = new Cat() { age = 10, name = "야옹이" };
            c.fight();
            c.sleep();
            c.eat();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Tiger t = new Tiger() { age = 11, name = "호돌이" };
            t.fight();
            t.eat();
            t.sleep();
            ((Cat)t).eat();
            ((Cat)t).fight();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Cat c = new Cat();
            c.name = "호치";
            c.age = 100;
            MessageBox.Show(c.ToString());
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Tiger t = new Tiger();
            t.name = "호치";
            t.age = 100;
            MessageBox.Show(t.ToString());

        }
    }
}
