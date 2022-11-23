using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp08_02
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            List<LoLCharacter> lols = new List<LoLCharacter>();
            LoLCharacter lol1 = new LoLCharacter();
            lol1.Name = "청산당한사람";
            lol1.level = 18;
            LoLCharacter lol2 = new LoLCharacter() { Name = "09714j", level = 5 };
            LoLCharacter lol3 = new LoLCharacter() { Name = "3대500치는티모", level = 12 };
            lols.Add(lol1);
            lols.Add(lol2);
            lols.Add(lol3);
            foreach (var item in lols)
            {
                Console.WriteLine($"{item.Name}의 레벨은 {item.level}");
                item.sayHello();
                item.Attact();
                Console.WriteLine("------------");
            }
 

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Tristana t = new Tristana();
            t.Name = "청산당한사람";
            t.level = 18;
            Console.WriteLine($"트리스타나를 플레이 중인 {t.Name}의 레벨은 {t.level}입니다.");
            t.sayHello();
            t.Move();
            t.Attact();
            Console.WriteLine("-------");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Leona l=new Leona();
            l.Name = "3대500치는티모";
            l.level = 12;
            Console.WriteLine($"레오나를 플레이 중인 {l.Name}의 레벨은 {l.level}입니다.");
            l.sayHello();
            l.Move();
            l.Attact();
        }
    }
}
