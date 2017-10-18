#ifndef WASTERECYCLING_PLASTICGARBAGE_H
#define WASTERECYCLING_PLASTICGARBAGE_H


#include "Garbage.h"

class PlasticGarbage: public Garbage {

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
