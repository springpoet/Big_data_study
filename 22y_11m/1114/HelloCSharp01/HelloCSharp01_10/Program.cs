using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp01_10
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("숫자 5개 입력");
            int[] numbers = new int[5];

            for(int i = 0; i < 5; i++)
            {
                numbers[i]=int.Parse(Console.ReadLine()); 
            }
            int min = numbers[0];
            int max = numbers[0];
            int min_index = 0;
            int max_index = 0;
            for (int i = 0; i < 5; i++)
            {
                if (numbers[i] < min)
                {
                    min = numbers[i];
                    min_index = i;
                }
                if (numbers[i] > max)
                {
                    max = numbers[i];
                    max_index = i;
                }
            }
            Console.WriteLine("최대값과 해당 인덱스 : " + max + ", " + max_index);
            Console.WriteLine("최솟값과 해당 인덱스 : " + min + ", " + min_index);

            int[] numbers2 = new int[10];
            for (int i = 0; i < 10; i++)
            {
                numbers2[i] = int.Parse(Console.ReadLine());
            }
            for (int i = 0; i < 10; i++)
            {
                
                if (numbers2[i] % 2 == 1)
                {
                    numbers2[i] = 0;
                }
                if (numbers2[i] != 0)
                {
                    Console.WriteLine(numbers2[i]);
                }
                
            }
        }
    }
}
