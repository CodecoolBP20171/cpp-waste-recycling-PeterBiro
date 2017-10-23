#include "MetalGarbage.h"

MetalGarbage::MetalGarbage(std::string nm) : Garbage(std::move(nm)){}

MetalGarbage::~MetalGarbage() = default;