using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp08_03
{
    public class Dog:ICharming
    {
        public string Name { get; set; }
        public int age { get; set; }   

public void actCute()
        {
            System.Windows.Forms.MessageBox.Show("주인을 핥는다.");
            //throw new NotImplementedException();
        }

        public void welCome()
        {
            System.Windows.Forms.MessageBox.Show("주인을 반긴다");
            //throw new NotImplementedException();
        }

        public void smile()
        {
            System.Windows.Forms.MessageBox.Show("헤헤헿헤");
            //throw new NotImplementedException();
        }
    }
}
