#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	char package;
	double hours, bill;


	cout << "Good day! Valued Customer.\n\nPlease choose the type of Package purchased" << endl;;
	cout << "Package A, B, or C. Type the letter only:" << endl;
	cin >> package;
	cout << "How many hours have you used? " << endl;
	cin >> hours;


	if ((package == 'A' || package == 'a' || package == 'B' || package == 'b' || package == 'C' || package == 'c') && hours >= 0)

	{
		switch (package)
		{
		case 'A':
		case 'a':
			if (hours < 10)
				bill = 995;
			else
				bill = 995 + (hours - 10) * 20;
			break;
		case 'B':
		case 'b':
			if (hours < 20)
				bill = 1495;
			else
				bill = 1495 + (hours - 20) * 10;
			break;
		case 'C':
		case 'c':
			bill = 1995;
			break;
		}

		cout << "Total Monthly Bill: " << "P" << bill << "\n\n" << endl;
	}
	else 
		cout << "Invalid Input";


	_getch();
	return 0;

}
