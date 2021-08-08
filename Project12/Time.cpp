#include "Time.h"
#include<iostream>

using namespace std;

Time::Time(int size)
{
	this->size = size;
	hour = new int[size+1];
	min = new int[size+1];
	sec = new int[size+1];

	for (int i = 0; i < size; i++)
	{
		hour[i] = 0;
		min[i] = 0;
		sec[i] = 0;
	}

}

Time::~Time()
{
	delete[] hour;
	delete[] min;
	delete[] sec;
}

void Time::getTime(int hour, int min, int sec, int i)
{
	this->hour[i] = hour;
	this->min[i] = min;
	this->sec[i] = sec;
}

void Time::pixTime()
{
	for (int i = 0; i < size; i++)
	{
		min[i] = min[i]+(sec[i] / 60);
		sec[i] = sec[i] % 60;
		hour[i] = hour[i]+(min[i] / 60);
		min[i] = min[i] % 60;
		hour[i] = hour[i] % 24;
	}
}

void Time::printTime()
{
	for (int i = 0; i < size; i++)
	{
		cout << "clock " << i + 1 << ", " << hour[i] << ":" << min[i] << ":" << sec[i] << endl;
	}

}


