#include"../complex/complex.h"
#include<iostream>
#include<iomanip>
using namespace std;

vector<long long> vll;

void recordSum(long long s) {
	vll.push_back(s);
	if (vll.size() > 10000) vll.clear();
}

long long calculateSum(long long n) {
	long long s = 0;
	for (int i = 1; i <= n; ++i) {
		s += i;
		recordSum(s);
	}
	return s;
}

int main() {
	long long n = 1000000000;
	Complex c;
	double p = c.calculatePI(n);
	long long s = calculateSum(n);
	cout << "pi=" << fixed << setprecision(13) << p << endl;
	cout << "1+2+...+" << n << "=" << s << endl;
	return 0;
}
