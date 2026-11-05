#pragma once

// Абстрактный базовый класс: любая операция калькулятора.
class Operation {
public:
    virtual ~Operation() = default;

    // Символ операции, например '+' или '*'
    virtual char symbol() const = 0;

    // Вычисление результата
    virtual double apply(double lhs, double rhs) const = 0;
};
