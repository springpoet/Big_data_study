using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp07_02
{
    internal class Tiger : Cat
    {
        public new void eat()
        {
            System.Windows.Forms.MessageBox.Show($"{name} 호랑이는 무섭게 {age}살 답게 잘 먹는다..");
        }

        public override void fight()
        {
            System.Windows.Forms.MessageBox.Show($"{name} 호랑이는 무섭게  {age}답게 잘 싸운다.");
        }
    }
}
