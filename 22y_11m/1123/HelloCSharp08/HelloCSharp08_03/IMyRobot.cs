﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp08_03
{
    public interface IMyRobot:IFight,ICharming
    {
        void printMessage(string message);
    }
}
