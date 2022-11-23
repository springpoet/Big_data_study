using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp08_03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Drone d1 = new Drone();
            d1.attackTarget();
            d1.killTarget();
            d1.protectMaster("09714j");
        }

        void cute_smile_wel(ICharming c)
        {
            c.actCute();
            c.smile();
            c.welCome();
        }
        void fightforme(IFight f, string m)
        {
            f.attackTarget();
            f.killTarget();
            f.protectMaster(m);
        }
        private void button2_Click(object sender, EventArgs e)
        {
            cute_smile_wel(new Dog());
            MessageBox.Show("---------");
            cute_smile_wel(new RobotPet());
        }

        private void button3_Click(object sender, EventArgs e)
        {
            List<IFight> fighters = new List<IFight>();
            fighters.Add(new RobotPet());
            fighters.Add(new Drone());

            foreach (IFight item in fighters)
            {
                fightforme(item, textBox1.Text);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Android a = new Android();
            //다형성에 의해서 오른쪽은 인스턴스 왼쪽은 인터페이스
            IMyRobot i = new Android();
            IFight f = new Android();
            ICharming c = new Android();
            a.printMessage("안드로이드 : 반갑습니다.");
            a.actCute();
            a.smile();
            a.welCome();
            a.attackTarget();
            a.killTarget();
            a.protectMaster("Android");
            
            MessageBox.Show("---------");

            i.printMessage("아이로봇 : 반갑습니다.");
            i.actCute();
            i.smile();
            i.welCome();
            i.attackTarget();
            i.killTarget();
            i.protectMaster("아이로봇");

            MessageBox.Show("---------");

            f.attackTarget();
            f.killTarget();
            f.protectMaster("아이파이트");

            MessageBox.Show("---------");
            
            c.actCute();
            c.smile();
            c.welCome();


        }
    }
}
