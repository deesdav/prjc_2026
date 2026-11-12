#include <iostream>

#include "Vektor.h"

int main() {
    Vektor v1(3, 1.0);
    Vektor v2(3, 2.0);
    v1[0] = 5.0;
    std::cout << "v1[0] = " << v1[0] << std::endl;
    v1 += v2;
    v1 *= 2.0;
    Vektor v3(3, 2.0);
    (v2 == v3) ? std::cout << "v2 a v3 jsou shodne" << std::endl : std::cout << "v2 a v3 nejsou shodne" << std::endl;
    return 0;
}
