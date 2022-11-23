using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp08_02
{
    public class Tristana : LoLCharacter
    {
        public override void Qkey() { Console.WriteLine("Q : 공격속도가 빨라집니다."); }
        public override void Wkey() { Console.WriteLine("W : 앞으로 점프를 합니다."); }
        public override void Ekey() { Console.WriteLine("E : 폭발성 탄환을 발사합니다"); }
        public override void Rkey() { Console.WriteLine("R : 적을 밀어내며 대포를 발사합니다."); }
        public void Attact()
        {
            Qkey();
            Wkey();
            Ekey();
            Rkey();
        }

        public void MoveDown()
        {
            Console.WriteLine("트리스타나가 아래로 움직인다.");
        }

        public void MoveLeft()
        {
            Console.WriteLine("트리스타나가 왼쪽으로 움직인다.");
        }

        public void MoveRight()
        {
            Console.WriteLine("트리스타나가 오른쪽으로 움직인다.");
        }

        public void MoveUp()
        {
            Console.WriteLine("트리스타나가 위로 움직인다.");
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
            Console.WriteLine("인사 : 벤들의 사수는~ ");
        }
    }
}
