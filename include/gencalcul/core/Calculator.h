#pragma once

#include <map>
#include <memory>

#include "gencalcul/operations/Operation.h"

// Калькулятор хранит набор операций и вычисляет выражение "a <op> b".
class Calculator {
public:
    // Калькулятор становится владельцем операции
    void addOperation(std::unique_ptr<Operation> operation);

    // Бросает std::invalid_argument, если операция неизвестна
    double calculate(double lhs, char symbol, double rhs) const;

private:
    std::map<char, std::unique_ptr<Operation>> operations_;
};
