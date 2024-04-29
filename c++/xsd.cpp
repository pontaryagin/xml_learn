#include <iostream>
#include "noteType.h"
#include "sample.h"


int
main (int argc, char* argv[])
{
    auto x =  sample_ns::note(argv[1]);
    std::cout << (*x).heading() << std::endl;
}

