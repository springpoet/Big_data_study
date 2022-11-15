using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp02_01
{
    public struct KBStudent
    {
        public string Name;
        public int Age;
        public string Mbti;
        public double eye;

        public void introduce()
        {
            Console.WriteLine("이름 : "+Name);
            Console.WriteLine("나이 : "+Age);
            Console.WriteLine("MBTI : "+Mbti);
            Console.WriteLine("시력 : "+eye);
        }
    }
}
