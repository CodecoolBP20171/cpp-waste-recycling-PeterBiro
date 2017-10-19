#include "PlasticGarbage.h"

PlasticGarbage::PlasticGarbage() {
    name = "some plastic waste";
    cleanState = false;
}

PlasticGarbage::PlasticGarbage(std::string * nm, bool cln) : Garbage::Garbage(nm), cleanState(cln){}

PlasticGarbage::~PlasticGarbage() = default;

bool PlasticGarbage::isClean() {
    return cleanState;
}

void PlasticGarbage::clean() {
    cleanState = true;
}
