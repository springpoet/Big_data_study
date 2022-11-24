using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp09
{
    public class MyBase
    {
        public string name { get; set; }
        public void print(string name)
        {
            System.Windows.Forms.MessageBox.Show(name);
        }
    }
}
