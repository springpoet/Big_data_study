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
            MyParent.money = 100000;
            MyParent.openDoor();
            MyParent p1 = new MyParent();
            MyParent p2 = new MyParent();
            MyChild c1 = new MyChild();
            p1.Name = "김성근";
            p1.Age = 28;
            p2.Name = "장태연";
            p2.Age = 30;    
            c1.Name = "이용희";
            c1.Age = 20;
            Console.WriteLine($"부모 클래스 :{MyParent.money}, 자식 클래스 : {MyChild.money}");
            //c1.openDoor();
            c1.eat();
            c1.sleep();
            p1.eat();
            p1.sleep();
            c1.study();
            c1.playgame();
            c1.buyBitCoin(10000);
            Console.WriteLine($"부모 클래스 :{MyParent.money}, 자식 클래스 : {MyChild.money}");
            List<MyParent> p3 = new List<MyParent>();
            p3.Add(p1);
            p3.Add(p2);
            p3.Add(c1);
            foreach (var item in p3)
            {
                if (item is MyParent)
                {
                    item.eat();
                    item.sleep();
                }
                if (item is MyChild)
                {
                    item.sleep();
                    item.eat();
                    item.sleep();
                    //  item.study();
                    // item.playgame();
                    //item.buyBitCoin();
                }

            }
        }
    }
}
