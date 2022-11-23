using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp08_03
{
    public class Android : IMyRobot
    {
        public void actCute()
        {
            System.Windows.Forms.MessageBox.Show("안드로이드 : 애교");
            //throw new NotImplementedException();
        }

        public void attackTarget()
        {
            System.Windows.Forms.MessageBox.Show("안드로이드 : 타겟 공격");
            //throw new NotImplementedException();
        }

        public void killTarget()
        {
            System.Windows.Forms.MessageBox.Show("안드로이드 : 타겟 살상");
            //throw new NotImplementedException();
        }

        public void printMessage(string message)
        {
            System.Windows.Forms.MessageBox.Show($"{message}");
            //throw new NotImplementedException();
        }

        public void protectMaster(string name)
        {
            System.Windows.Forms.MessageBox.Show($"안드로이드({name}) : 마스터 보호");
            //throw new NotImplementedException();
        }

        public void smile()
        {
            System.Windows.Forms.MessageBox.Show("안드로이드 : 스마일");
            //throw new NotImplementedException();
        }

        public void welCome()
        {
            System.Windows.Forms.MessageBox.Show("안드로이드 : 반기기");
            //throw new NotImplementedException();
        }
    }
}
