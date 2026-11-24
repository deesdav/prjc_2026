#include <iostream>

#include "Box.h"
#include "Zvire.h"
using namespace std;


int main() {
    Pes p1("Rex"), p2("Bety"), p3("Lenka");
    Kocka k1("Micka"), k2("Liza"), k3("Jess");
    const int N = 7;
    Box boxy[N];
    boxy[0].addZvire(p1.klonuj());
    boxy[1].addZvire(p2.klonuj());
    boxy[2].addZvire(p3.klonuj());
    boxy[3].addZvire(k1.klonuj());
    boxy[4].addZvire(k2.klonuj());
    boxy[5].addZvire(k3.klonuj());
    boxy[6].addZvire(p1.klonuj(p2));

    for (int i = 0; i < N; i++) {
        cout << "Box " << i + 1 << " (" <<
                boxy[i].getZvire()->getName() << "): " <<
                boxy[i].getZvire()->ozvi_se() << endl;
    }
    return 0;
}
