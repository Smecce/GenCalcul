#include "gencalcul/operations/Addition.h"

char Addition::symbol() const {
    return '+';
}

double Addition::apply(double lhs, double rhs) const {
    return lhs + rhs;
}
