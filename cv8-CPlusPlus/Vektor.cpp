#include "Vektor.h"
#include <iostream>

Vektor::Vektor(const std::size_t size, double initialValue) : m_size(size), m_data(new double[size]) {
    for (std::size_t i = 0; i < m_size; i++) {
        this->m_data[i] = initialValue;
    }
    std::cout << "Vytvoren vektor o velikosti " << m_size << std::endl;
}

Vektor::~Vektor() {
    delete [] this->m_data;
    std::cout << "Smazan vektor o velikosti " << m_size << std::endl;
}

std::size_t Vektor::size() const {

    return this->m_size;
}

double &Vektor::operator[](std::size_t i) {
    if (i >= this->m_size) {
        throw std::out_of_range("Vektor::operator[]");
    }
    return this->m_data[i];
}

Vektor &Vektor::operator+=(const Vektor &other) {
    if (this->m_size != other.m_size) {
        return *this;
    }
    for (std::size_t i = 0; i < other.m_size; i++) {
        this->m_data[i] += other.m_data[i];
    }
    return *this;
}

Vektor &Vektor::operator*=(double k) {
    for (std::size_t i = 0; i < m_size; i++) {
        this->m_data[i] *= k;
    }
    return *this;
}

bool Vektor::operator==(const Vektor &other) const {
    if (this->m_size != other.m_size) {
        return false;
    }
    for (std::size_t i = 0; i < other.m_size; i++) {
        if (this->m_data[i] != other.m_data[i]) {
            return false;
        }
    }
    return true;
}
