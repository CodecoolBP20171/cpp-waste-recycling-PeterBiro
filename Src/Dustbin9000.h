#ifndef DUSTBIN9000_H
#define DUSTBIN9000_H

#include "Dustbin.h"
#include "MetalGarbage.h"
#include "BottleCap.h"

class Dustbin9000 : public Dustbin{

public:
    Dustbin9000(std::string);
    ~Dustbin9000();

    void throwOutMetalGarbage(MetalGarbage);
    void throwOutBottleCap(BottleCap);
    void emptyContents();

protected:
    std::vector<MetalGarbage> metalContainer;
    std::vector<BottleCap> bottleCapContainer;
};


#endif //DUSTBIN9000_H
