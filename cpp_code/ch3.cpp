#include "ch3.h"
#include <iostream>

using namespace std;
ch3 Ch3;
double getPI();		//根据公式计算PI  03_03
void findSymm();	//寻找并输出 11~999 之间的数 m，它满足 m、m2 和 m3均为回文数。
void moveDisks();	//在3针上移盘子问题	03_10
int getVolume(int length, int width = 2, int height = 3);	//默认参数	03_15

void ch3Fun() {
	/*double x, n;
	cout << "\nPlease enter x and n to get x^n:";
	cin >> x >> n;
	Ch3.power(x,n);*/
	//Ch3.switchType();
	//cout << "PI:"<<getPI();
	//findSymm();
	//Ch3.countFun(5, 8);
	/*Ch3.arctan(5.0);*/
	//cout << Ch3.fac(6);
	/*cout << Ch3.comm(5,9);*/
	//moveDisks();
	//int a = getVolume();
}

double getPI() {
	ch3 Ch3;
	return 16.0 * Ch3.arctan(1 / 5.0) - 4.0 * Ch3.arctan(1 / 239.0);
}

void findSymm() {
	for (int i = 11; i < 999; i++)
	{
		if (Ch3.symm(i) && Ch3.symm(i * i) && Ch3.symm(i * i * i)) {
			cout << "m=" << i;
			cout << "  m*m= " << i * i;
			cout << "  m*m*m= " << i * i * i << "\n";
		}
	}
}

void moveDisks() {
	int m;
	cout << "Please enter the number of disks:";
	cin >> m;
	cout << "the setps of moving " << m << " disks:\n";
	Ch3.hanoi(m, 'A', 'B', 'C');
}

int getVolume(int length, int width, int height) {
	return length * width * height;
}