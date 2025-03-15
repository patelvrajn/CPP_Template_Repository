#include <iostream>
#include "hello_world.hpp"

extern "C" { // Avoids name mangling of the test's entry point.
int main(void) {
    print_hello_world();
    return 0;
}
}
