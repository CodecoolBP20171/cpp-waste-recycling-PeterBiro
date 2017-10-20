#include "Dustbin.h"
#include "DustbinContentError.hpp"

Dustbin::Dustbin() {
    color = "Black";
}

Dustbin::Dustbin(std::string clr) : color(clr){}

Dustbin::~Dustbin() = default;

void Dustbin::emptyContents() {
    paperContent.clear();
    plasticContent.clear();
    houseWasteContent.clear();
}

void Dustbin::throwOutGarbage(Garbage garbage) {
    houseWasteContent.push_back(garbage);
}

void Dustbin::throwOutPaperGarbage(PaperGarbage paperGarbage) {
    if ( paperGarbage.isSqueezed() ) paperContent.push_back(paperGarbage);
    else throw NotSqueezedError();
}

void Dustbin::throwOutPlasticGarbage(PlasticGarbage plasticGarbage) {
    if ( plasticGarbage.isClean() ) plasticContent.push_back(plasticGarbage);
    else throw NotCleanedError();
}
