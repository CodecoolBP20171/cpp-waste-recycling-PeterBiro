#include "PaperGarbage.h"

PaperGarbage::PaperGarbage(std::string nm , bool squeeze) : Garbage::Garbage(std::move(nm)), squeezedState(squeeze){}

PaperGarbage::~PaperGarbage() = default;


bool PaperGarbage::isSqueezed() {
    return squeezedState;
}

void PaperGarbage::squeeze() {
    squeezedState = true;
}

