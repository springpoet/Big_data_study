using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp01_09
{
    internal class Program
    {
        static void Main(string[] args)
        {
            for(int i = 1; i <= 10; i++)
            {
                Console.WriteLine(i);
            }
            int num1 = 1;
            while (true)
            {
                Console.WriteLine(num1);
                num1++;
                if (num1 >10)
                {
                    break;
                }
            }
            Console.WriteLine("두 수를 입력하세요");
            int a = int.Parse(Console.ReadLine());
            int b=int.Parse(Console.ReadLine());    
        }
    }
}
