using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp06_03
{
    public class MyMath
    {
        public int Power(int x)
        {
            return x * x;
        }
        public int Power(int x, int c)
        {
            return (int)Math.Pow(x, c);
        }
        public int Multi(int x, int y)
        {
            return x * y;
        }
    }
}
