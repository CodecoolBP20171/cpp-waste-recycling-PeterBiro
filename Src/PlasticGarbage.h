#ifndef PLASTICGARBAGE_H
#define PLASTICGARBAGE_H

#include "Garbage.h"

class PlasticGarbage: Garbage {

public:
    PlasticGarbage();
    PlasticGarbage(std::string*, bool);
    ~PlasticGarbage();

    void clean();
    bool isClean();

private:
    bool cleanState;

};


#endif //WASTERECYCLING_PLASTICGARBAGE_H
