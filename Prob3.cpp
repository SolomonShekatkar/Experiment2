#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
	int x, y;
	const float z = 2.5;
	float V;

	cout << "Enter the value of x:" << endl;
	cin >> x;
	cout << "Enter the value o y:" << endl;
	cin >> y;

	switch (x)
	{
	case 1:
		if (1 < y < 5)
		{
			V = x * y * z;
			cout << "The value of V is:" << setw(10) << fixed << setprecision(2) << V << endl;
		}
		else if (y >= 5)
		{
			V = x + y / z;
			cout << "The value of V is:" << setw(10) << fixed << setprecision(2) << V << endl;
		}
		break;

	case 2:
		if (y <= 5)
		{
			V = fabs((x - y) / z);
			cout << "The value of V is:" << setw(10) << fixed << setprecision(2) << V << endl;
		}
		else if (y > 5)
		{
			V = x - sqrt(y + z);
			cout << "The value of V is:" << setw(10) << fixed << setprecision(2) << V << endl;
		}
		break;

	default:
	{
		V = x + y + z;
		cout << "The value of V is:" << setw(10) << fixed << setprecision(2) << V << endl;
	}
	break;


	}
	
	

	_getch();
	return 0;
}