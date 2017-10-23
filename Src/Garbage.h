#ifndef GARBAGE_H
#define GARBAGE_H

#include <iostream>

class Garbage {

public:

    Garbage(std::string nm = "some waste"); // What is 'explicit' keyword?
    ~Garbage();

    std::string getName();

protected:
    std::string name;
};


#endif //WASTERECYCLING_GARBAGE_H
