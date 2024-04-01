#pragma once
#include <iostream>
using namespace std;

class ch2
{	
public:
	void cinAndOut();  //���벢��ʾ����  02_01
	bool isLeapYear();  //�ж�����  02_02
	bool compareNum();  //���������������Ƚ��������Ĵ�С  02_03
	void switchWeek();	//����һ��0~6��������ת�����������  02_04
	int sumOneToTen();	//����Ȼ��1~10֮��while  02_05
	int reverseNum();	//���������������λ���ַ�ת�����  02_06
	int sumDoWhile();	//����Ȼ��1~10֮��do-while  02_07
	void getAllFactor();	//����һ����������������������  02_08
	void integerCount();	//����һϵ��������ͳ�Ƴ����������� i �͸��������� j,���� 0 �������   02_10
};

void ch2::cinAndOut() {
	int radius;
	cout << "Please enter the radius:\n";
	cin >> radius;
	cout << "The radius is:" << radius << "\n";
	cout << "PI is :" << 3.14 << "\n";
	cout << "Please enter a different radius:\n";
	cin >> radius;
	cout << "Now the radius is changed to:" << radius << "\n";
}

bool ch2::isLeapYear() {
	int year;
	bool isLeapYear;
	cout << "\nPlease enter year to judage leap��";
	cin >> year;
	isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	if (isLeapYear) {
		cout << year << " is a leap year\n";
	}
	else {
		cout << year << " is not a leap year\n";
	}
	return isLeapYear;
}

bool ch2::compareNum() {
	int x;
	int y;
	cout << "\nPlease enter x and y to compare:";
	cin >> x >> y;
	if (x != y) {
		if (x > y) {
			cout << "x " << x << " > y " << y<<"\n";
		}
		else {
			cout << "x " << x << " <y " << y << "\n";
		}
	}
	else {
		cout << "x=y" << "\n";
	}
	return x < y;

}

void ch2::switchWeek() {
	int day;
	cout << "\nPlease enter a number(0-6) to switch to weekends:";
	cin >> day;
	switch (day)
	{
	default:
		cout << "illeage,please enter a number range 0 to 6" << "\n";
		break;
	case 1:
		cout << "Monday" << "\n";
		break;
	case 2:
		cout << "Tuesday" << "\n";
		break;
	case 3:
		cout << "Wednesday" << "\n";
		break;
	case 4:
		cout << "Thursday" << "\n";
		break;
	case 5:
		cout << "Friday" << "\n";
		break;
	case 6:
		cout << "Saturday" << "\n";
		break;
	case 0:
		cout << "Sunday" << "\n";
		break;
	}
}

int ch2::sumOneToTen() {
	int i = 1, sum = 0;
	while (i <= 10) {
		sum += i;
		i++;
	}
	cout << "\none to ten sum = " << sum << "\n";
	return sum;
}

int ch2::sumDoWhile() {
	int i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i <= 10);
	cout << "\n" << "\none to ten sum = " << sum << "\n";
	return sum;
}

int ch2::reverseNum() {
	int n, right_digit, newNum = 0;
	cout << "\nEnter the number to reverse:";
	cin >> n;
	do {
		right_digit = n % 10;
		cout << right_digit;
		n /= 10;
		newNum = right_digit + newNum * 10;
	} while (n != 0);
	return newNum;
}

void ch2::getAllFactor() {
	int n;
	cout << "\n" << "\nPlease enter the number to get all factors:";
	cin >> n;
	cout << "Number Factor :";
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			cout << i << " ";
		}
	}
}

void ch2::integerCount() {
	int positiveNum = 0, negativeNum = 0, n;
	cout << "\n" << "\nEnter some integers please(enter 0 to exit) to count:";
	cin >> n;
	while (n != 0) {
		if (n > 0) positiveNum++;
		if (n < 0)negativeNum++;
		cin >> n;
	}
	cout << "Count of positive integers:" << positiveNum << "\n";
	cout << "Count of negative integers:" << negativeNum << "\n";
}
