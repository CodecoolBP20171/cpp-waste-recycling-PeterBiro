#ifndef BOTTLECAP_H
#define BOTTLECAP_H

#include "Garbage.h"

class BottleCap : Garbage{

public:
    BottleCap();
    ~BottleCap();

    bool isPink();
    std::string whatColor();

protected:
    std::string color;

};


#endif //WASTERECYCLING_BOTTLECAP_H
