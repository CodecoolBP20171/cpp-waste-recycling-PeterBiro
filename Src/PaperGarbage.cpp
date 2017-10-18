#include "PaperGarbage.h"

PaperGarbage::PaperGarbage() {
    name = "some paper scrap";
    squeezedState = false;
}

PaperGarbage::PaperGarbage(std::string * nm, bool squeeze) : name(*nm), squeezedState(squeeze){}

bool PaperGarbage::isSqueezed() {
    return squeezedState;
}

void PaperGarbage::squeeze() {
    squeezedState = true;
}

const std::string* Garbage::getName() {
    return &name;
}
