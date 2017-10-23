#ifndef PAPERGARBAGE_H
#define PAPERGARBAGE_H

#include "Garbage.h"

class PaperGarbage: public Garbage {

public:
    PaperGarbage();
    PaperGarbage(std::string, bool);
    ~PaperGarbage();

    bool isSqueezed();
    void squeeze();

private:
    bool squeezedState;

};


#endif //WASTERECYCLING_PAPERGARBAGE_H
