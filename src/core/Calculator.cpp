#include "gencalcul/core/Calculator.h"

#include <stdexcept>
#include <string>
#include <utility>

void Calculator::addOperation(std::unique_ptr<Operation> operation) {
    const char key = operation->symbol();
    operations_[key] = std::move(operation);
}

double Calculator::calculate(double lhs, char symbol, double rhs) const {
    const auto it = operations_.find(symbol);
    if (it == operations_.end()) {
        throw std::invalid_argument(std::string("Неизвестная операция: ") + symbol);
    }
    return it->second->apply(lhs, rhs);
}
