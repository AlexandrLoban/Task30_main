#include "logic.h"

int main() {
	int x1, y1, x2, y2, x3, y3;

	cout << "Input x1, y1: ";
	cin >> x1 >> y1;
	cout << "Input x2, y2: ";
	cin >> x2 >> y2;
	cout << "Input x3, y3: ";
	cin >> x3 >> y3;

	cout << "fourth peak: " << find_fourth_peak(x1, y1, x2, y2, x3, y3) << endl;

	return 0;
}