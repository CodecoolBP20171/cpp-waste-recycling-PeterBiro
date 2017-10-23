#include "BottleCap.h"

BottleCap::BottleCap(std::string clr) : color(clr){}

BottleCap::~BottleCap() = default;

bool BottleCap::isPink() {
    return (color == "PINK" || color == "Pink" || color == "pink");
}

std::string BottleCap::whatColor() {
    return color;
}
