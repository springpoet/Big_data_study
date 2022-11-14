using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp01_05
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //조건문 : 3항 연산자, if문, switch 문
            //전부 java와 같다.
            int a = int.Parse(Console.ReadLine());
            string result = a % 2 == 0 ? "짝" : "홀";
            Console.WriteLine(result);
            if (a == 0)
            {
                Console.WriteLine("0입니다");
            } else if (a % 2 == 0)
            {
                Console.WriteLine("짝수");
            }else if (a % 2 == 1){
                Console.WriteLine("홀수");
            }
            switch (a)
            {
                case 0:
                    Console.WriteLine("a=0이다.");
                    break;
                    case 1:
                          case 2:
                              case 3:
                    Console.WriteLine("a는 1~3이다.");
                    break;
                default:
                    Console.WriteLine("a는 "+a+"이다.");
                    break;
            }
        }
    }
}
