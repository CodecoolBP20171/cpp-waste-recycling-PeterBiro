#include <iostream>
#include "Src/PaperGarbage.h"
#include "Src/PlasticGarbage.h"


int main() {

    PaperGarbage paper1;

    std::cout << *paper1.getName() << std::endl;
    std::cout << paper1.isSqueezed() << std::endl;
    std::cout << "now squeezing" << std::endl;

    paper1.squeeze();

    std::cout << paper1.isSqueezed() << std::endl;

    std::string name = "fecni";
    PaperGarbage paper2( & name, false);

    std::cout << *paper2.getName() << std::endl;
    std::cout << paper2.isSqueezed() << std::endl;
    std::cout << "now squeezing" << std::endl;

    paper2.squeeze();

    std::cout << paper2.isSqueezed() << std::endl;



    return 0;
}