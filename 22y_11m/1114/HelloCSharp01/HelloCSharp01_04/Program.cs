using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp01_04
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("내 이름은?");
            string name=Console.ReadLine();
            Console.WriteLine("내 나이는?");
            int age=int.Parse(Console.ReadLine());
            Console.WriteLine("내 MBTI는?");
            string mbti = Console.ReadLine();
            Console.WriteLine("내 혈액형은?");
            string blood=Console.ReadLine();
            Console.WriteLine($"내 이름은 {name}, 나이는 {age}, MBTI는 {mbti}, 혈액형은 {blood}");

            Console.WriteLine("내가 태어난 연도는?");
            int year=int.Parse(Console.ReadLine());
            Console.WriteLine($"내 나이는 {DateTime.Now.Year-year+1} ");

            Console.WriteLine("반지름 값은?");
            double circle=double.Parse(Console.ReadLine());
            const double PI = 3.14;
            Console.WriteLine($"원의 둘레는 : {circle*2*PI}");
            Console.WriteLine($"원이 넓이는 : {circle*circle*PI}");

            Console.WriteLine("내 시력은?");
            double eye = double.Parse(Console.ReadLine());
            Console.WriteLine($"내 시력은 {eye} 입니다.");
        }
    }
}
