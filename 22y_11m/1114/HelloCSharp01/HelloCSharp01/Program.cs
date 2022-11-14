using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp01
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //sysout=cw
            //cw 하고 tab 두번
            Console.WriteLine("안녕");
            int num1 = 10;
            double num2 = 3.14;
            //c#에서는 문자열 변수 저장시 s를 소문자로 씀
            string m1 = "Hello";
            string m2 = "이것도 됨";
            char lastname = '김';
            bool tf = true;

            char c1 = "안녕하세요"[0];
            string s1 = "Hello";
            char c2 = s1[1];
            Console.WriteLine(c1);
            Console.WriteLine(c2);
            Console.WriteLine("10"+20);
            //연산자 : + - / * % 그대로 있음
            //1. 문자열 처리
            int age = 34;
            string info = "내 나이 : " + age;
            Console.WriteLine(info);

            //2. string.format
            string info2 = string.Format("내 나이 : {0}", age);
            Console.WriteLine(info2);

            //3. $ 표시
            string info3 = $"내 나이 : {age}";
            Console.WriteLine(info3);
        }

    }
}
