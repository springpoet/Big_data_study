using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp08_03
{
    public class Drone : IFight
    {
        public void attackTarget()
        {
            System.Windows.Forms.MessageBox.Show("드론 : 타겟을 공격하겠습니다. " );
            //throw new NotImplementedException();
        }

        public void killTarget()
        {
            System.Windows.Forms.MessageBox.Show("드론 : 타겟을 죽이겠습니다.");
            //throw new NotImplementedException();
        }

        public void protectMaster(string name)
        {
            System.Windows.Forms.MessageBox.Show($"드론명 ( {name} ) : 마스터를 보호하겠습니다.");
            //throw new NotImplementedException();
        }
    }
}
