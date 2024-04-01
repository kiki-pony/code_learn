#pragma once
#include <iostream>
using namespace std;

class ch3
{
public:
	double power(double x,int n);	//计算x的n次方  03_01
	int switchType();	//数制转换 03_02
	double arctan(double x);	//求arctan的值  03_03
	bool symm(unsigned n);	//判断是否是回文数， 11^2=121，11^3=1331  03_04
};

double ch3::power(double x, int n) {
	double val = 1.0;
	cout << "x^n=" << x << "^" << n << "=";
	while (n--) val *= x;
	cout << val;
	return val;
}

int ch3::switchType() {
	char n[8];
	int value=0,x=1;
	cout << "\nPlease enter an 8 bit binary number:";
	for (int i = 0; i < 8; i++)
	{
		cin >> n[i];
	}
	if (n[7] == '1') value = x;
	for (int j = 6; j >= 0; j--){
		if (n[j] == '1') value += x * 2;
		x*=2;
	}
	cout << "number is :" << value;
	return value;
}

double ch3::arctan(double x) {
	double sqr = x * x;
	double e = x;
	double r = 0;
	int i = 1;
	while (e / i > 1e-15) {
		double f = e / i;	//计算值
		r = (i % 4 == 1) ? r + f : r - f;   //符号
		e = e * sqr;
		i += 2;
	}
	return r;
}

bool ch3::symm(unsigned n) {
	unsigned i = n;
	unsigned m = 0;
	while (i > 0) {
		m = m * 10 + i % 10;
		i /= 10;
	}
	return m == n;
}


