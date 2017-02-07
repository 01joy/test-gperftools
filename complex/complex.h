#ifndef COMPLEX_H_
#define COMPLEX_H_

#include<vector>
using namespace std;

class Complex {
private:
	vector<double> pis;
	void recordPI(double x);
public:
	Complex();
	double calculatePI(int n);
	~Complex();
};

#endif
