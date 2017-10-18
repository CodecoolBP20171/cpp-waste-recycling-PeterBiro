//
// Created by birop on 2017.10.18..
//

#include "PlasticGarbage.h"

PlasticGarbage::PlasticGarbage() {
    name = "some plastic waste";
    cleanState = false;
}

PlasticGarbage::PlasticGarbage(std::string * nm, bool cln) : name(*nm), cleanState(cln){}

bool PlasticGarbage::isClean() {
    return cleanState;
}

void PlasticGarbage::clean() {
    cleanState = true;
}
