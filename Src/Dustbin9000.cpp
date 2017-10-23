#include "Dustbin9000.h"
#include "DustbinContentError.hpp"

Dustbin9000::Dustbin9000(std::string clr="black") : Dustbin(clr){

}

Dustbin9000::~Dustbin9000() = default;

void Dustbin9000::throwOutMetalGarbage(MetalGarbage metalGarbage) {
    metalContainer.push_back(metalGarbage);
}

void Dustbin9000::throwOutBottleCap(BottleCap bottleCap) {
    if (bottleCap.isPink()) bottleCapContainer.push_back(bottleCap);
    else throw BottleCapError();
}

void Dustbin9000::emptyContents() {
    Dustbin::emptyContents();
    metalContainer.clear();
    bottleCapContainer.clear();
}