﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp08_02
{
    public interface IRpgCharacter
    {
        int level { get; set; }

        void Attact();
    }
}
