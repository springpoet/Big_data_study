using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp06
{
    internal class MyChild:MyParent
    {
        public MyChild()
        {
            money--;
        }
        public void study()
        {
            Console.WriteLine("LOL공부하장");
        }
        public void playgame()
        {
            Console.WriteLine("게임하장");
        }
        public void buyBitCoin(int bit)
        {
            money+=bit;
        }
    }
}
