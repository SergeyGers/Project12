#include<iostream>
#include"Time.h"

using namespace std;



int main() {

	int size,hour,min,sec;
	cout << "How many clocks you want: ";
	cin >> size;
	Time t1(size);

	for (int i = 0; i < size; i++)
	{
		cout << "it's your " << i + 1 << " clock " << endl << "Enter hour: ";
		cin >> hour;
		cout << "Enter min: ";
		cin >> min;
		cout << "Enter sec: ";
		cin >> sec;
		t1.getTime(hour, min, sec, i);
		cout << endl;

	}

	t1.pixTime();
	t1.printTime();


	///etwetewtgsdgdsgdsgdsgdsgdsgsdgsdgsdgsdgsdgsgddgdsg


	return 0; 
}