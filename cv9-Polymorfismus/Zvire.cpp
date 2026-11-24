#include "Zvire.h"

#include <cstring>
#include <iostream>
using namespace std;

Zvire::Zvire(const char *_name) {
    name = new char[strlen(_name) + 1];
    strcpy(name, _name);
}

Zvire::Zvire(const Zvire &other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
}

const char *Zvire::getName() const {
    return name;
}

Zvire::~Zvire() {
    delete[] name;
}

Pes::Pes(const char *_name) : Zvire(_name) {
}

const char *Pes::ozvi_se() const {
    return "Bark! Bark!";
}

Zvire *Pes::klonuj() const {
    return new Pes(*this);
}

Zvire *Pes::klonuj(const Zvire &partner) const {
    char *noveJmeno = new char[strlen(getName()) + strlen(partner.getName()) + 1];
    strcpy(noveJmeno, getName());
    strcat(noveJmeno, partner.getName());
    Zvire *potomek = new Pes(noveJmeno);
    delete[] noveJmeno;
    return potomek;
}

Kocka::Kocka(const char *_name) : Zvire(_name) {
}

const char *Kocka::ozvi_se() const {
    return "Meow! Meow!";
}

Zvire *Kocka::klonuj() const {
    return new Kocka(*this);
}

Zvire *Kocka::klonuj(const Zvire &partner) const {
    char *noveJmeno = new char[strlen(getName()) + strlen(partner.getName()) + 1];
    strcpy(noveJmeno, getName());
    strcat(noveJmeno, partner.getName());
    Zvire *potomek = new Kocka(noveJmeno);
    delete[] noveJmeno;
    return potomek;
}
