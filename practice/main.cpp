#include <iostream>
#include "Vehicle.h"
#include <vector>
using namespace std;

int main() {
    vector<Vehicle *> vehicles;
    vehicles.push_back(new Car(130));
    vehicles.push_back(new Bicycle(25));

    for (Vehicle *v: vehicles) {
        v->go();
    }
    for (Vehicle *v: vehicles) {
        delete v;
    }
    return 0;
}
