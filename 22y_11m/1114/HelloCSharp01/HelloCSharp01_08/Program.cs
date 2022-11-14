using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp01_08
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("1번 문제");
            for(int i = 1; i <= 5; i++)
            {
                Console.WriteLine("안녕하세요! "+i+"번님");
            }
            Console.WriteLine("2번 문제");
            int sum = 0;
            for(int i = 0; i <= 10; i++)
            {
                sum += i;
            }
            Console.WriteLine("1부터 10까지의 합 : "+sum);

            Console.WriteLine("3번 문제");
            Console.WriteLine("몇 층짜리 별?");
            int star=int.Parse(Console.ReadLine());
            for(int i = 1; i <= star; i++)
            {
                for(int j = 1; j <=i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
    }
}
