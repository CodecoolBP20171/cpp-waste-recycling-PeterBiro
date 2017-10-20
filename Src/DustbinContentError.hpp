#ifndef DUSTBINCONTETNERROR_HPP
#define DUSTBINCONTETNERROR_HPP

#include <exception>

class NotSqueezedError : public std::exception {
public:
    virtual const char* what() const noexcept {
        return "It is not squeezed!";
    }
};

class NotCleanedError : public std::exception {
public:
    virtual const char* what() const noexcept {
        return "It is not clean!";
    }
};

class DustbinFullError : public std::exception {
public:
    virtual const char* what() const noexcept {
        return "Dustbin is full! Guess what is the solution.";
    }
};
#endif //#define DUSTBINCONTETNERROR_HPP
