#ifndef WASTERECYCLING_GARBAGE_H
#define WASTERECYCLING_GARBAGE_H

#include <iostream>

class Garbage {

public:
    Garbage();
    Garbage(std::string*);
    ~Garbage();

    const std::string* getName();

protected:
    std::string name;
};


#endif //WASTERECYCLING_GARBAGE_H
