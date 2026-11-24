#include "Box.h"

Box::Box() : zvire(nullptr) {
};

Box::~Box() {
    delete zvire;
}

void Box::addZvire(Zvire *_zvire) {
    delete zvire;
    zvire = _zvire;
}

const Zvire *Box::getZvire() const {
    return zvire;
}
