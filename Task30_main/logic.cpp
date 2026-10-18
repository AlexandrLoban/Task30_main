#include "logic.h"

string calculate(int n1, int n2, char symbol) {
	string result = "error";

	if (symbol == '*') {
		result = to_string(n1 * n2);
	}
	else if (symbol == '/' and n2 != 0) {
		result = to_string(n1 / n2);
	}
	else if (symbol == '%' and n2 != 0) {
		result = to_string(n1 % n2);
	}
	else if (symbol == '+') {
		result = to_string(n1 + n2);
	}
	else if (symbol == '-') {
		result = to_string(n1 - n2);
	}

	return result;
}