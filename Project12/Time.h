#pragma once
#include<iostream>
class Time
{

public:
	Time(int size=0);

	~Time();

	void getTime(int hour,int min,int sec, int i);
	void pixTime();
	void printTime();




private:

	int* hour, * min, * sec,size;



};

