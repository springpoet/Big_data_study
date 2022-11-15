using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp02_03
{
    internal class Program
    {
        static void Main(string[] args)
        {
            BKBank b1 = new BKBank();
            b1.Name = "박재형";
            b1.Balance = 1000000;
            BKBank b2 = b1;
            b2.Balance = 0;
            b1.info();
            b2.info();

            KBBank kb1=new KBBank();
            kb1.Name = "박지호";
            kb1.Balance = 50000;
            KBBank kb2 = new KBBank();
            kb2 = kb1;
            kb2.Balance = 0;
            kb1.info();
            kb2.info();
            
            //일일이 복사하는 방법
            KBBank kb3 = new KBBank();
            kb3.Name = kb1.Name;
            kb3.Balance = 0;

            //새 클래스 사용
            KyungBookBank kbb1 = new KyungBookBank("조영탁");
            kbb1.Balance = 5000;
            KyungBookBank kbb2 = new KyungBookBank(kbb1.Name);
            kbb2.Balance = 0;

            kbb1.info();
            kbb2.info();
        }
    }
}
