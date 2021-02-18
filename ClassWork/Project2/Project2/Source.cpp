#include <iostream>
#include<math.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main()
{
	/*
	double a, b, c, p, S;

	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;

	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << "Area is = " << S << endl;
	*/

	/*int n;
	cin >> n;
	(n % 2 == 0) ? cout << n << "is even" : cout << n << "is odd";
	cout << ((n % 2 == 0) ? "even" : "odd") << endl;*/

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	/*float a, b, c, d, x1, x2;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		x1 = ((-b + sqrt(d)) / 2 * a);
		x2 = ((-b - sqrt(d)) / 2 * a);
		cout << "x1 = " << x1 << '\n' << "x2 = " << x2 <<endl;
	}
	else if (d < 0)
	{
		cout << "Коренів не існує" << endl;
	}
	else if (d == 0)
	{
		x1= ((-b) / 2 * a);
		cout << "x = " << x1 << endl;
	}
	*/

	/*int m=10;
	while(m >= 0)
	{
		cout << m << "...\n";
		m--;
	}*/

	/*do
	{
		cout << m << "...\n";
		m--;
	} 
	while (m >= 0);*/

	/*for (int i = 0; i <= m; i++)
	{
		cout << i << endl;
	}*/

	/*int k = 0;
	for (;;)
	{
		if (k == 10)
		{
			break;
		}
		cout << k;
		k++;
	}*/

	/*int l, j;
	for (l = 0, j = 5; l!= j, l++, j--)
	{
		cout << l << " " << j << endl;
	}*/

	int n, i;
	bool Proste = true;
	cout << "Enter a number: ";
	cin >> n;
	for (i = 2; i <= (sqrt(abs(n))); i++)
	{
		if (n % i == 0)
		{
			Proste = false;
			break;
		}
	}

	if (Proste)
	{
		cout << "This is a prime number" << endl;
	}
	else
	{
		cout << "This is not a prime number" << endl;
	}
	system("pause");
	return 0;
}