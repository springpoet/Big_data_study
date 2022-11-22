using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp07_03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Animal a = new Dog();
            a.Name = "퍼피";
            a.Age = 10;
            a.sleep();
            a.eat();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Animal b = new Cat() { Name = "야옹야옹이", Age = 5 };
            b.sleep();
            b.eat();
        }
        //Animal을 상속한 클래스들로 만들어진 인스턴스들
        private void sleep_and_eat(Animal a)
        {
            a.sleep();
            a.eat();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            sleep_and_eat(new Cat() { Name = "랑이", Age = 10 });
            sleep_and_eat(new Dog() { Name = "행봉이", Age = 8 });
        }

        private void button4_Click(object sender, EventArgs e)
        {
            List<Animal> animals = new List<Animal>();
            animals.Add(new Cat() { Name = "야홍이", Age = 1 });
            animals.Add(new Dog() { Name = "Dog1", Age = 10 });
            animals.Add(new Cat() { Name = "Cat1", Age = 5 });

            foreach (var item in animals)
            {
                sleep_and_eat(item);
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            sleep_and_eat(new Rabbit() { Age = 8, Name = "토끼1" });
            Animal r = new Rabbit() { Age = 10, Name = "토끼2" };
            sleep_and_eat(r);
            Animal r2 = new Rabbit();
            r2.Name = "토끼3";
            r2.Age = 11;
            r2.sleep();
            r2.eat();
        }
    }
}
