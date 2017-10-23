#ifndef PLASTICGARBAGE_H
#define PLASTICGARBAGE_H

#include "Garbage.h"

class PlasticGarbage: Garbage {

public:
    PlasticGarbage(std::string = "some plastic waste", bool = false);
    ~PlasticGarbage();

    void clean();
    bool isClean();

private:
    bool cleanState;

};


#endif //WASTERECYCLING_PLASTICGARBAGE_H
