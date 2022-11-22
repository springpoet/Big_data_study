using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp06
{
    public class Cuvoid : Rectangle
    {
        public int z { get; set; }
        public int getVolume()
        {
            return w * h * z;
        }
    }
}
