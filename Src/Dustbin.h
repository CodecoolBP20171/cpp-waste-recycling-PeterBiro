#ifndef DUSTBIN_H
#define DUSTBIN_H

#include <iostream>
#include <vector>
#include "PaperGarbage.h"
#include "PlasticGarbage.h"

class Dustbin {

public:
    Dustbin();
    Dustbin(std::string);
    ~Dustbin();

    void throwOutGarbage(Garbage);
    void throwOutPaperGarbage(PaperGarbage);
    void throwOutPlasticGarbage(PlasticGarbage);
    void emptyContents();

protected:
    std::string color;
    std::vector< PaperGarbage > paperContent;
    std::vector< PlasticGarbage > plasticContent;
    std::vector< Garbage > houseWasteContent;
};


#endif //DUSTBIN_H
