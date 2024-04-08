#pragma once
#include <iostream>
using namespace std;
class ch4
{

};

class Clock {	// 04_01
public:
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:
	int hour, minute, second;
};

void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime() {
	std::cout << hour << ":" << minute << ":" << second;
}


