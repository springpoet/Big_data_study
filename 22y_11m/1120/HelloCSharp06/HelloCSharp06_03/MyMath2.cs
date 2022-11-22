using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp06_03
{
    public class MyMath2
    {
        public static int Power(int x)
        {
            return x * x;
        }
        public static int Power(int x, int c)
        {
            return (int)Math.Pow(x, c);
        }
        public static int Multi(int x, int y)
        {
            return x * y;
        }
    }
}
