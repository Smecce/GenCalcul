#pragma once

#include "gencalcul/operations/Operation.h"

class Multiplication : public Operation {
public:
    char symbol() const override;
    double apply(double lhs, double rhs) const override;
};
