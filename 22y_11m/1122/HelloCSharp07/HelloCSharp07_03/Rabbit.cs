using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp07_03
{
    public class Rabbit : Animal
    {
        public override void eat()
        {
            System.Windows.Forms.MessageBox.Show($"토끼 {Name}는 {Age}살 답게 잘 먹는다 뇸뇸뇸");
            //throw new NotImplementedException();
        }
    }
}
