//
// Created by dejvi on 22.11.2026.
//

#ifndef PRJC_2026_ANIMAL_H
#define PRJC_2026_ANIMAL_H

class Animal {
public:
    virtual ~Animal() = default;

    virtual void vydejZvuk() const = 0;
};

class Dog : public Animal {
public:
    void vydejZvuk() const override;
};

#endif //PRJC_2026_ANIMAL_H
