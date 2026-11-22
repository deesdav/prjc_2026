#include "Animal.h"
#include <iostream>
#include <string>

int main() {
    Animal *a = new Dog();
    a->vydejZvuk();
    delete a;
    return 0;
}
