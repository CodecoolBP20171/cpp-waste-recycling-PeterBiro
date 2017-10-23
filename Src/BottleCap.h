#ifndef BOTTLECAP_H
#define BOTTLECAP_H

#include "Garbage.h"

class BottleCap : Garbage{

public:
    BottleCap(std::string);
    ~BottleCap();

    bool isPink();
    std::string whatColor();

protected:
    std::string color;

};

#endif //BOTTLECAP_H
