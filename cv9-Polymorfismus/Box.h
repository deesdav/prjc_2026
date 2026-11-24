#ifndef PRJC_2026_BOX_H
#define PRJC_2026_BOX_H
#include "Zvire.h"


class Box {
private:
    Zvire *zvire;

public:
    Box();

    ~Box();

    void addZvire(Zvire *zvire);

    const Zvire *getZvire() const;
};


#endif //PRJC_2026_BOX_H
