#include "ch3.h"
#include <iostream>

using namespace std;
ch3 Ch3;
double getPI();		//根据公式计算PI  03_03
void findSymm();	//寻找并输出 11~999 之间的数 m，它满足 m、m2 和 m3均为回文数。

void ch3Fun() {
	
	/*double x, n;
	cout << "\nPlease enter x and n to get x^n:";
	cin >> x >> n;
	Ch3.power(x,n);*/
	//Ch3.switchType();
	//cout << "PI:"<<getPI();
	//findSymm();
	//Ch3.countFun(5, 8);
	//Ch3.arctan(1/5.0);
	//cout << Ch3.fac(6);
	cout << Ch3.comm(5,9);
}



double getPI() { 
	ch3 Ch3;
	return 16.0 * Ch3.arctan(1 / 5.0) - 4.0 * Ch3.arctan(1 / 239.0);	
}

void findSymm() {
	for (int i = 11; i < 999; i++)
	{
		if(Ch3.symm(i)&&Ch3.symm(i*i)&&Ch3.symm(i*i*i)){
			cout << "m=" << i;
			cout << "  m*m= " << i * i;
			cout << "  m*m*m= " << i * i * i<<"\n";
		}
	}
}