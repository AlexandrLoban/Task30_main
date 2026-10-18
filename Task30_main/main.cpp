#include "logic.h"

int main() {
	int number1, number2;
	char math_symbol;

	cout << "Input number1, number2 and math-symbol: ";
	cin >> number1 >> number2 >> math_symbol;

	string msg = to_string(number1) + " " + math_symbol + " " +
		to_string(number2) + " = "
		+ calculate(number1, number2, math_symbol);

	cout << msg << "\n";

	return 0;
}