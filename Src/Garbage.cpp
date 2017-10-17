#include "Garbage.h"

Garbage::Garbage() {
    name = "some waste";
}

Garbage::Garbage(std::string * nm):name(*nm) {}


