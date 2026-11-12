#ifndef PRJC_2026_VECTOR_H
#define PRJC_2026_VECTOR_H
#include <cstddef>

class Vektor {
    double *m_data;
    std::size_t m_size;
public:
    Vektor(std::size_t size, double initialValue = 0.0);
    ~Vektor();
    std::size_t size() const;

    double& operator[](std::size_t i);
    Vektor& operator+=(const Vektor& other);
    Vektor& operator*=(double k);
    bool operator==(const Vektor& other) const;

};

#endif //PRJC_2026_VECTOR_H
