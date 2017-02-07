#include "complex.h"

Complex::Complex() {
}

void Complex::recordPI(double x) {
	pis.push_back(x);
	if (pis.size() > 10000) pis.clear();
}

double Complex::calculatePI(int n) {
	double x = 2, z = 2;
	int a = 1, b = 3;
	while (n--) {
		z = z*a / b;
		x += z;
		a++;
		b += 2;
		recordPI(x);
	}
	return x;
}

Complex::~Complex() {
}
