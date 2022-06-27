#pragma once
#include "Bacteria.h"
class Coccus :
    public Bacteria
{
    Coccus(int posx, int posy) {
        x = posx;
        y = posy;
        nearby = 0.1;

    }
};

