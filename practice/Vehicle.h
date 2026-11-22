//
// Created by dejvi on 22.11.2026.
//

#ifndef PRJC_2026_VEHICLE_H
#define PRJC_2026_VEHICLE_H


class Vehicle {
protected:
    int m_speed;

public:
    Vehicle(const int _speed) : m_speed(_speed) {
    };

    virtual void go() const = 0;

    virtual ~Vehicle() = default;
};

class Car : public Vehicle {
public:
    Car(int _speed) : Vehicle(_speed) {
    };

    void go() const override;
};

class Bicycle : public Vehicle {
public:
    Bicycle(int _speed) : Vehicle(_speed) {
    };

    void go() const override;
};


#endif //PRJC_2026_VEHICLE_H
