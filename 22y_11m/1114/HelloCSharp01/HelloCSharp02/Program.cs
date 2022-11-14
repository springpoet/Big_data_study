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
            Console.WriteLine("여긴"+" 2번"+" 프로젝트입니다.");
            Console.WriteLine("안녕, 내 이름은 김성근이고, 남자이며, 20대야");
            Console.WriteLine("-------------");
            int age = 28;
            string name = "김성근";
            Console.WriteLine("안녕 내 나이은 "+age+"이고, "+name+"이라고 해");
            Console.WriteLine("-------------");
            string info2 = string.Format("내 나이는 {0} 이고, {1} 이라고 해", age,name);
            Console.WriteLine(info2);
            Console.WriteLine("-------------");
            string info3 = $"내 나이는 {age} 이고 {name}이라고 해";
            Console.WriteLine(info3);
        }
    }
}
