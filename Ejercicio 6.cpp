#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int n;
	float a;
	float b = 1, c = 1;
	float suma = 0;

	cout << "Ingrese el valor de n:" << endl;
	cin >> n;
	cout << "Ingrese el valor de a:" << endl;
	cin >> a;

	if (n > 0 && a > 0)
	{
		while (c <= n)
		{
			suma = suma + 1 / (a * b);
			b = 3 * c;
			c++;
		}

		cout << "La suma es: " << suma << endl;
	}
	else
		cout << "Ingrese nuevamente los valores" << endl;

	_getch();
}