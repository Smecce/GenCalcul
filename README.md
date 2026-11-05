# GenCalcul

Учебный консольный калькулятор на C++17 (операции `+` и `*`), собирается через CMake.
Цель проекта — освоить работу с C++ и CMake в VSCode.

## Сборка из командной строки

    cmake -S . -B build
    cmake --build build
    ./build/gencalcul        # на Windows: build\Debug\gencalcul.exe

## Структура

    include/gencalcul/
        core/Calculator.h
        operations/Operation.h        (абстрактный класс)
        operations/Addition.h
        operations/Multiplication.h
    src/
        main.cpp
        core/Calculator.cpp
        operations/Addition.cpp
        operations/Multiplication.cpp
    .vscode/                          (настройки VSCode)

Заголовки подключаются так: `#include "gencalcul/operations/Addition.h"`.
