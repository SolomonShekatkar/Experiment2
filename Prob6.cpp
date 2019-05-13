#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	bool loop = false;

	do
	{
		int number, third = 0;
		cout << "Enter a number: ";
		cin >> number;

		if (number > 0)
		{
			for (int second = 1; second <= number; second++)
			{
				third += second;
			}
			cout << "The sum of all the whole number from 1 to " << number << " is " << third << "." << endl;
		}

		else
		{
			cout << "Thank you!" << endl;
			break;
		}
		

	}while (!loop);



	_getch();
	return 0;
}