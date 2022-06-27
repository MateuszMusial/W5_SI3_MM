#pragma once
#include "Bacteria.h"
class Spirillum :
    public Bacteria
{
    Spirillum(int posx, int posy) {
        x = posx;
        y = posy;
        nearby = 0.2;

    }
};

