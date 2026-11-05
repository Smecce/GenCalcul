#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>

#include "gencalcul/operations/Addition.h"
#include "gencalcul/core/Calculator.h"
#include "gencalcul/operations/Multiplication.h"

int main()
{
	Calculator calculator;
	calculator.addOperation(std::make_unique<Addition>());
	calculator.addOperation(std::make_unique<Multiplication>());

	std::cout << "GenCalcul. Введите выражение, например: 2 + 3 или 4 * 2.5\n"
						<< "Для выхода введите: exit\n";

	std::string line;
	while (true)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, line) || line == "exit")
		{
			break;
		}

		std::istringstream input(line);
		double lhs = 0;
		double rhs = 0;
		char symbol = 0;

		if (!(input >> lhs >> symbol >> rhs))
		{
			std::cout << "Не удалось разобрать выражение. Формат: число операция число\n";
			continue;
		}

		try
		{
			std::cout << calculator.calculate(lhs, symbol, rhs) << "\n";
		}
		catch (const std::invalid_argument &e)
		{
			std::cout << e.what() << "\n";
		}
	}

	return 0;
}
