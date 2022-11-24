using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp09
{
    public class MyClass :MyBase
    {
        public int num { get; set; }
        public void printMsg(string name)
        {
            System.Windows.Forms.MessageBox.Show(name+"TEST"+num);
        }

        private static MyClass _instance = null;
        private MyClass() { }
        public static MyClass getInstance
        {
            get
            {
                if (_instance == null)
                {
                    _instance = new MyClass();
                }
                    return _instance;
            }
        }

        public static MyClass _getInstance()
        {
            if(_instance == null)
            {
                _instance=new MyClass();
            }
            return _instance;
        }

    }
}
