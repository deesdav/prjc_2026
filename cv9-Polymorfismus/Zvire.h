#ifndef PRJC_2026_ZVIRE_H
#define PRJC_2026_ZVIRE_H

class Zvire {
private:
    char *name;

public:
    Zvire(const char *_name);

    //copy construktor
    Zvire(const Zvire &other);

    const char *getName() const;

    virtual const char *ozvi_se() const = 0;

    virtual Zvire *klonuj() const = 0;

    virtual Zvire *klonuj(const Zvire &partner) const = 0;

    virtual ~Zvire();
};

class Pes : public Zvire {
public:
    Pes(const char *_name);

    const char *ozvi_se() const override;

    Zvire *klonuj() const override;

    Zvire *klonuj(const Zvire &partner) const override;
};

class Kocka : public Zvire {
public:
    Kocka(const char *_name);

    const char *ozvi_se() const override;

    Zvire *klonuj() const override;

    Zvire *klonuj(const Zvire &partner) const override;
};

#endif //PRJC_2026_ZVIRE_H
