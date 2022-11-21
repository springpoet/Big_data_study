using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp06
{
    public class Rectangle
    {
        public int w { get; set; }
        public int h { get; set; }
        public int getArea()
        {
            return w * h;
        }
    }
}
