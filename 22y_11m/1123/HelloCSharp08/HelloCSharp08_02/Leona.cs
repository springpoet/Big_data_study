using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp08_02
{
    public class Leona : LoLCharacter
    {
        public override void Qkey() { Console.WriteLine("Q : 대상을 기절시킵니다."); }
        public override void Wkey() { Console.WriteLine("W : 방어력을 높이는 오라를 만듭니다."); }
        public override void Ekey() { Console.WriteLine("E : 칼을 뻗어 닿은 적을 기절시키고 돌진합니다."); }
        public override void Rkey() { Console.WriteLine("R : 타겟 지점에 흑점 폭발을 일으킵니다."); }
        public void Attact()
        {
            Qkey();
            Wkey();
            Ekey();
            Rkey();
        }
    
        public void MoveDown()
        {
            Console.WriteLine("레오나가 아래로 움직인다.");
        }

        public void MoveLeft()
        {
            Console.WriteLine("레오나가 왼쪽으로 움직인다.");
        }

        public void MoveRight()
        {
            Console.WriteLine("레오나가 오른쪽으로 움직인다.");
        }

        public void MoveUp()
        {
            Console.WriteLine("레오나가 위로 움직인다.");
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
            Console.WriteLine("인사 : 빛이 당신을 태울것입니다.");
        }
    }
}
