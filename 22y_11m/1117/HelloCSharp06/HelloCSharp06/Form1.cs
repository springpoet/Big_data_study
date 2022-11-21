using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp06
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Rectangle rect = new Rectangle();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Rectangle rect = new Rectangle();
            rect.w = int.Parse(q_width.Text);
            rect.h = int.Parse(q_column.Text);
            rect_area.Text = "직사각형의 넓이 : " + rect.getArea();
            Console.WriteLine($"직사각형의 넓이 : {rect.getArea()}");
        }
        private void button2_Click(object sender, EventArgs e)
        {
            Circle circle = new Circle(int.Parse(q_r.Text));
            circle_length.Text = "원의 둘레 : " + circle.getRound();
            Console.WriteLine($"원의 둘레 : {circle.getRound()}");
        }
        private void button3_Click(object sender, EventArgs e)
        {
            Circle circle = new Circle(int.Parse(q_r.Text));
            circle_area.Text = "원의 넓이 : " + circle.getArea();
            Console.WriteLine($"원의 넓이 : {circle.getArea()}");
        }
        private void button4_Click(object sender, EventArgs e)
        {
            Cuvoid cuv = new Cuvoid();
            cuv.w = int.Parse(q_width.Text);
            cuv.h = int.Parse(q_column.Text);
            cuv.z = int.Parse(q_height.Text);
            cuvoid_volume.Text = "직사각형의 부피 : " + cuv.getVolume();
            Console.WriteLine($"직사각형의 부피 : {cuv.getVolume()}");
        }
        private void button5_Click(object sender, EventArgs e)
        {
            Sphere sp = new Sphere(int.Parse(q_r.Text));
            circle_volume.Text = "원의 부피 : " + sp.getVolume();
            Console.WriteLine($"원의 부피 : {sp.getVolume()}");

        }
    }
}
