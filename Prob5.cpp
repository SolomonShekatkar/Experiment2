#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int first = 0, second = 1, third, fourth = 2, fifth = 2 + 20;

	cout << "Fibonacci Numbers:" << endl;
	cout << first << "," << second << ",";

	for (fourth; fourth < fifth; fourth++)

	{
		third = first + second;
		first = second;
		second = third;
		cout << third << ",";
	}

	cout << "\b "; 

	_getch();
	return 0;
}