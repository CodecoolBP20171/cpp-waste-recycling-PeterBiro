#ifndef DUSTBIN9000_H
#define DUSTBIN9000_H

#include "Dustbin.h"
#include "MetalGarbage.h"

class Dustbin9000 : public Dustbin{

public:
    void throwOutMetalGarbage(MetalGarbage);
    void throwOutBottleCap(BottleCap);

protected:
    std::vector<MetalGarbage> metalContainer;
    std::vector<BottleCap> bottleCapContainer;
};


#endif //DUSTBIN9000_H
