#pragma once
#include "Bacteria.h"
class Bacillus :
    public Bacteria
{
     Bacillus(int posx, int posy) {
        x = posx;
        y = posy;
        nearby = 0.3;

    }
};

