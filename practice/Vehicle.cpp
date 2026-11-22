//
// Created by dejvi on 22.11.2026.
//

#include "Vehicle.h"

#include <iostream>
#include <ostream>
using namespace std;

void Car::go() const {
    cout << "Jedu rychle po dalnici rychlosti " << m_speed << " km/h" << endl;
}

void Bicycle::go() const {
    cout << "Slapu do pedalu rychlosti " << m_speed << " km/h" << endl;
}
