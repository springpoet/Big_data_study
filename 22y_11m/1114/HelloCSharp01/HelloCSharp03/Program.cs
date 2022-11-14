using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp03
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Console.ReadLine(); 으로 입력
            Console.WriteLine("이름이 뭐에요?");
            string name = Console.ReadLine();
            Console.WriteLine("나이가 어떻게 되요?");
            int age=int.Parse(Console.ReadLine());
            Console.WriteLine("몸무게는?");
            double kg=double.Parse(Console.ReadLine());
            Console.WriteLine(name);
            Console.WriteLine(age);
            Console.WriteLine(kg);
        }
    }
}
