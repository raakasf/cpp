// main.cpp
#include "coroutine/coroutine.h"

int main() {
    auto c = foo();
    c.resume(); // Prints "Hello "
    c.resume(); // Prints "World!"
    return 0;
}
