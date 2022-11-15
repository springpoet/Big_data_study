using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("1번");
            Console.WriteLine("안녕하세요");
            
            Console.WriteLine("\n2번");
            Console.WriteLine(10+20);
            Console.WriteLine(7/3);
            Console.WriteLine(7%3);
            Console.WriteLine(7-3);
            Console.WriteLine(10 * 20);

            Console.WriteLine("\n3번");
            Console.WriteLine("10"+10);
            Console.WriteLine('2'+100);
            Console.WriteLine("10"+'2');

            Console.WriteLine("\n4번");
            Console.WriteLine("태어난 연도 입력");
            int mybirth=int.Parse(Console.ReadLine());
            Console.WriteLine($"나는 {mybirth}년생입니다.");

            Console.WriteLine("\n5번");
            Console.WriteLine("이름 입력");
            string myname = Console.ReadLine();
            Console.WriteLine($"내 이름은 {myname}입니다.");

            Console.WriteLine("\n6번");
            int age = 28;
            string name = "김성근";
            Console.WriteLine($"내이름은 \"{ name}\"입니다. 나이는 \"{age}\"대 입니다.");

            Console.WriteLine("\n7번");
            Console.WriteLine("내 나이 입력");
            int myage=int.Parse(Console.ReadLine());
            Console.WriteLine(DateTime.Now.Year-myage+1+"년생");

            Console.WriteLine("\n8번");
            Console.WriteLine("현재 연도, 태어난 연도 입력");
            int nowYear=int.Parse(Console.ReadLine());
            int bornYear= int.Parse(Console.ReadLine());
            Console.WriteLine(nowYear-bornYear+1+"살");

            Console.WriteLine("\n9번");
            string num9 = "안녕하세요";
            Console.WriteLine(num9[0]);

            Console.WriteLine("\n10번");
            Console.WriteLine("정사각형 변 길이 입력");
            int w=int.Parse(Console.ReadLine());
            Console.WriteLine("결과 : "+w*w);

            Console.WriteLine("\n11번");
            Console.WriteLine("숫자 한개 입력");
            int num11=int.Parse(Console.ReadLine());
            if (num11 < 0)
            {
                Console.WriteLine("음수");
            }

            Console.WriteLine("\n12번");
            Console.WriteLine("숫자 한개 입력");
            int num12=int.Parse(Console.ReadLine());
            if (num12 >= 0)
            {
                Console.WriteLine("자연수");
            }
            else
            {
                Console.WriteLine("자연수 아님");    
            }

            Console.WriteLine("\n13번");
            Random r = new Random();
            int rsp = r.Next(3);
            switch (rsp)
            {
                case 0:
                    Console.WriteLine("가위");
                    break;
                case 1:
                    Console.WriteLine("바위");
                    break;
                case 2:
                    Console.WriteLine("보");
                    break;
                default:
                    break;
            }

            Console.WriteLine("\n14번");
            int myRSP = r.Next(3);
            switch (myRSP)
            {
                case 0:
                    Console.WriteLine("사용자 : 가위");
                    switch (rsp)
                    {
                        case 0:
                            Console.WriteLine("컴퓨터 : 가위");
                            Console.WriteLine("비김");
                            break;
                        case 1:
                            Console.WriteLine("컴퓨터 : 바위");
                            Console.WriteLine("짐");
                            break;
                        case 2:
                            Console.WriteLine("컴퓨터 : 보");
                            Console.WriteLine("이김");
                            break;
                        default:
                            break;
                    }
                    break;
                case 1:
                    Console.WriteLine("사용자 : 바위");
                    switch (rsp)
                    {
                        case 0:
                            Console.WriteLine("컴퓨터 : 가위");
                            Console.WriteLine("이김");
                            break;
                        case 1:
                            Console.WriteLine("컴퓨터 : 바위");
                            Console.WriteLine("비김");
                            break;
                        case 2:
                            Console.WriteLine("컴퓨터 : 보");
                            Console.WriteLine("짐");
                            break;
                        default:
                            break;
                    }
                    break;
                case 2:
                    Console.WriteLine("사용자 : 보");
                    switch (rsp)
                    {
                        case 0:
                            Console.WriteLine("컴퓨터 : 가위");
                            Console.WriteLine("짐");
                            break;
                        case 1:
                            Console.WriteLine("컴퓨터 : 바위");
                            Console.WriteLine("이김");
                            break;
                        case 2:
                            Console.WriteLine("컴퓨터 : 보");
                            Console.WriteLine("비김");
                            break;
                        default:
                            break;
                    }
                    break;
                default:
                    break;
            }

            Console.WriteLine("\n15번");
            if (rsp == myRSP)
            {
                Console.WriteLine("비김");
            }else if (myRSP - rsp == 1 || myRSP - rsp == -2)
            {
                Console.WriteLine("이김");
            }else
            {
                Console.WriteLine("짐");
            }

            Console.WriteLine("\n16번");
            for(int i = 1; i <= 10; i++)
            {
                Console.WriteLine(i);
            }

            Console.WriteLine("\n17번");
            int sum = 0;
            for(int i = 1; i <= 10; i++)
            {
                sum *= i;
            }
            Console.WriteLine("1부터 10까지의 합 : "+sum);

            Console.WriteLine("\n18번");
            for(int i = 1; i <= 10; i++)
            {
                Console.WriteLine("안녕하세요. "+i+"번째 손님.");
            }

            Console.WriteLine("\n19번");
            while (true)
            {
                int i=int.Parse(Console.ReadLine());
                Console.WriteLine("입력한 값의 제곱 : "+i*i);
                if (i == 0)
                {
                    break;
                }
            }

            Console.WriteLine("\n20번");
            int multi = 1;
            for(int i = 1; i <= 10; i++)
            {
                if (i % 2 == 1)
                {
                    multi *= i;
                }
            }
            Console.WriteLine("홀수의 곱 : "+multi);

            Console.WriteLine("\n20-2번");
            multi = 1;
            for(int i = 1; i <= 10; i++)
            {
                if (i % 2 == 0)
                {
                    continue;
                }
                multi *= i;
            }
            Console.WriteLine("홀수의 곱 (continue) : "+multi);
        }

    }
}
