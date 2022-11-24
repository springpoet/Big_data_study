using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp06
{
    public class MyParent
    {
        public string Name { get; set; }
        public int Age { get; set; }

        public static int money = 0;
        public static void openDoor()
        {
            Console.WriteLine("문열어잉");
        }

        public void eat()
        {
            Console.WriteLine($"{Name}님 식사하세요");
        }
        public void sleep()
        {
            Console.WriteLine($"{Age}살에 맞게 자자");
        }   
        
    }
}
