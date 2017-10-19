#include "PaperGarbage.h"

PaperGarbage::PaperGarbage() {
    name = "some paper scrap";
    squeezedState = false;
}

PaperGarbage::PaperGarbage(std::string * nm, bool squeeze) : Garbage::Garbage(nm), squeezedState(squeeze){}

PaperGarbage::~PaperGarbage() = default;


bool PaperGarbage::isSqueezed() {
    return squeezedState;
}

void PaperGarbage::squeeze() {
    squeezedState = true;
}

