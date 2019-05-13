#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int gallon;
	double balance, bill;
	const double dcharge = 35, gcharge = 1.10;

	cout << "Enter the gallons consumed in the current month: ";
	cin >> gallon;
	cout << "Enter your outstanding balance from past month: ";
	cin >> balance;

	if (balance > 0 && gallon >= 0)
	{
		bill = dcharge +  balance + 20 + (gallon * gcharge);
		cout << "Customer's Water Bill: " << "P" << bill << endl;
	}
	else if (balance == 0 && gallon >=0)
	{
		bill = dcharge + balance + (gallon * gcharge);
		cout << "Customer's Water Bill: " << "P" << bill << endl;
	}
	else
		cout << "Invalid Amount" << endl;

	_getch();
	return 0;
}