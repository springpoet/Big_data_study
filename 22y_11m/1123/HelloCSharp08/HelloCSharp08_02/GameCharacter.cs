using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp08_02
{
    abstract public class GameCharacter
    {
        public string Name { get; set; }
        abstract public void sayHello();
    }
}
