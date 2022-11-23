using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp08_02
{
    //클래스는 하나만 상속 가능, 인터페이스는 여러개 가능.
    public class LoLCharacter : GameCharacter, IRpgCharacter, IRts
    {
        public int level { get; set; }

        public virtual void Qkey() { Console.WriteLine("Q키 누름"); }
        public virtual void Wkey() { Console.WriteLine("W키 누름"); }
        public virtual void Ekey() { Console.WriteLine("E키 누름"); }
        public virtual void Rkey() { Console.WriteLine("R키 누름"); }
        public void Attact()
        {
            Qkey();
            Wkey();
            Ekey();
            Rkey();
        }

        public void MoveDown()
        {
            Console.WriteLine("아래로 움직인다.");
           }

        public void MoveLeft()
        {
            Console.WriteLine("왼쪽으로 움직인다.");
        }

        public void MoveRight()
        {
            Console.WriteLine("오른쪽으로 움직인다.");
        }

        public void MoveUp()
        {
            Console.WriteLine("위로 움직인다.");
        }
        public void Move()
        {
            MoveDown();
            MoveUp();
            MoveLeft();
            MoveRight();
        }
        public override void sayHello()
        {
            Console.WriteLine("인사를 한다.");
        }
    }
}
