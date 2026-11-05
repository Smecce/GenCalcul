#include "gencalcul/operations/Multiplication.h"

char Multiplication::symbol() const {
    return '*';
}

double Multiplication::apply(double lhs, double rhs) const {
    return lhs * rhs;
}
