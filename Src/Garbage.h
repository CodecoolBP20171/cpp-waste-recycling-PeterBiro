#ifndef GARBAGE_H
#define GARBAGE_H

#include <iostream>

class Garbage {

public:
    Garbage();
    Garbage(std::string);
    ~Garbage();

    std::string getName();

protected:
    std::string name;
};


#endif //WASTERECYCLING_GARBAGE_H
