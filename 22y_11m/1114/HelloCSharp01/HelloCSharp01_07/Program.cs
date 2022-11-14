using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp01_07
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //반복문 3가지 + 비공식 1가지(GOTO문)
            //1. for문
            for(int i = 0; i < 5; i++)
            {
                Console.WriteLine("안녕하세요 " + i + "번님");
            }

            //2. while문
            while (true)
            {
                Console.WriteLine("숫자 입력");
                int num=int.Parse(Console.ReadLine());
                if (num < 0)
                {
                    Console.WriteLine("음수이므로 종료");
                    break;
                }
            }

        }
    }
}
