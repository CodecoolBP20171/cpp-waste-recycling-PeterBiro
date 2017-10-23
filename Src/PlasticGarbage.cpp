#include "PlasticGarbage.h"

PlasticGarbage::PlasticGarbage(std::string nm, bool cln) : Garbage::Garbage(std::move(nm)), cleanState(cln){}

PlasticGarbage::~PlasticGarbage() = default;

bool PlasticGarbage::isClean() {
    return cleanState;
}

void PlasticGarbage::clean() {
    cleanState = true;
}
