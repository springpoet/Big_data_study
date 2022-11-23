using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp08_03
{
    public class RobotPet : ICharming, IFight
    {
        public void actCute()
        {
            System.Windows.Forms.MessageBox.Show("주인님 사랑해용");
            //throw new NotImplementedException();
        }

        public void attackTarget()
        {
            System.Windows.Forms.MessageBox.Show("타겟을 공격한다");
            //throw new NotImplementedException();
        }

        public void killTarget()
        {
            System.Windows.Forms.MessageBox.Show("타겟을 살상한다");
            //throw new NotImplementedException();
        }

        public void protectMaster(string name)
        {
            System.Windows.Forms.MessageBox.Show("주인을 보호한다");
            //throw new NotImplementedException();
        }

        public void smile()
        {
            System.Windows.Forms.MessageBox.Show("01001010110");
            //throw new NotImplementedException();
        }

        public void welCome()
        {
            System.Windows.Forms.MessageBox.Show("로봇처럼 반긴다.");
            //throw new NotImplementedException();
        }
    }
}
