#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int n;
	int a = 1;
	int suma = 0;

	cout << "Ingrese el valor de n:" << endl;
	cin >> n;

	if (n > 0)
	{
		while (a <= n)
		{
			suma = suma + a * a;
			a++;
		}

		cout << "La suma es: " << suma << endl;
	}
	else
		cout << "Ingrese nuevamente el valor de n" << endl;
	
	_getch();
}