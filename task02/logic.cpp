#include "logic.h"

string find_fourth_peak(int x1, int y1, int x2, 
	int y2, int x3, int y3) {
	int y4, x4;

	if (y1 == y2) {
		y4 = y3;
	}
	else if (y1 == y3) {
		y4 = y2;
	}
	else {
		y4 = y1;
	}

	if (x1 == x2) {
		x4 = x3;
	}
	else if (x1 == x3) {
		x4 = x2;
	}
	else if (x2 == x3) {
		x4 = x1;
	}
	else {
		return "Error!";
	}

	return to_string(x4) + " " + to_string(y4);
}