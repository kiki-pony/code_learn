#pragma once
#include <iostream>
using namespace std;

class ch3
{
public:
	double power(double x, int n);		//计算x的n次方  03_01
	int switchType();				//数制转换 03_02
	double arctan(double x);		//求arctan的值  03_03
	bool symm(unsigned n);			 //判断是否是回文数， 11^2=121，11^3=1331  03_04
	double tsin(double x);			 //计算sin的值
	double countFun(double r, double s);	//计算分段函数	03_05
	int fac(int n);		//求n的阶乘  03_08
	int comm(int n, int k);	  //用递归从n个人中选k个人组成不同组合数 03_09
	void move(char src, char dest);			//用于把盘子从src针移动到dest针 03_10	内联函数  03_14
	void hanoi(int n, char src, char medium, char dest);	//盘子移动问题	03_10
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
	int value = 0, x = 1;
	cout << "\nPlease enter an 8 bit binary number:";
	for (int i = 0; i < 8; i++)
	{
		cin >> n[i];
	}
	if (n[7] == '1') value = x;
	for (int j = 6; j >= 0; j--) {
		if (n[j] == '1') value += x * 2;
		x *= 2;
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

double ch3::tsin(double x) {
	double sqr = x * x;
	double e = x;
	double r = 0;
	int i = 1;
	double n = 1;
	//double f = e / n;
	while (e / n >= 1e-10) {
		double f = e / n;
		r = (i % 4 == 1) ? r + f : r - f;   //符号
		e = e * sqr;
		i += 2;
		n = n * (i - 1) * i;
	}
	double g = 0;
	/*double t = x;
	int n = 1;
	do{
		g += t;
		n++;
		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
	} while (fabs(t) >= 1e-10);*/

	return r;
}

double ch3::countFun(double r, double s) {
	double k = 0;
	double a = tsin(r);
	double b = tsin(s);
	if (r * r <= s * s) {
		k = sqrt(a * a + b * b);
	}
	else {
		k = tsin(r * s) / 2;
	}
	cout << k;
	return k;
}

int ch3::fac(int n) {
	if (n > 0) return n * fac(n - 1);
	if (n == 0) return 1;
}

int ch3::comm(int n, int k) {
	if (k > n) return 0;
	if (n == k || k == 0) return 1;
	return comm(n - 1, k) + comm(n - 1, k - 1);
}

inline void ch3::move(char src, char dest) {
	cout << src << "----->" << dest << endl;
}

void ch3::hanoi(int n, char src, char medium, char dest) {
	if (n == 1) move(src, dest);
	else {
		hanoi(n - 1, src, dest, medium);
		move(src, dest);
		hanoi(n - 1, medium, src, dest);
	}
}
