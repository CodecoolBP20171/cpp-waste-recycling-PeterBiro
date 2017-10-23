#ifndef PAPERGARBAGE_H
#define PAPERGARBAGE_H

#include "Garbage.h"

class PaperGarbage: public Garbage {

public:
    PaperGarbage(std::string nm = "some paper scrap", bool squeeze = false);
    ~PaperGarbage();

    bool isSqueezed();
    void squeeze();

private:
    bool squeezedState;

};


#endif //WASTERECYCLING_PAPERGARBAGE_H
