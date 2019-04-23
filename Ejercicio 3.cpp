#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int n, a;
	int b = 1, c = 1;
	int suma = 0;

	cout << "Ingrese el valor de n:" << endl;
	cin >> n;
	cout << "Ingrese el valor de a:" << endl;
	cin >> a;

	if (n > 0 && a > 0)
	{
		while (c <= n)
		{
			suma = suma + (a * b);
			b = 2 * c;
			c++;
		}

		cout << "La suma es: " << suma << endl;
	}
	else
		cout << "Ingrese nuevamente los valores" << endl;

	_getch();
}