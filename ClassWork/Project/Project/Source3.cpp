#include<iostream>
using namespace std;

int add(int a, int b = 2);
void print(const int& a);
void duplicate(int& a);

double modul(double a)
{
	if (a < 0)
	{
		a *= (-1);
	}
	return a;
}

double function(double x)
{
	double y = modul(x) *sin(x);
	return y;
}



int main3()
{
	/*int x = 5, y = 9;
    int res = add(5, 9);
	cout << add(x) << endl;

	print(x);
	duplicate(x);
	print(x);*/

	//y = | x | *sin(x)
	// x | a, a+h, a+2h, .. b y | y1, y2, ...., 
	double a, b;
	double h;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "h = ";
	cin >> h;
	double x;
	x = a;
	while (x <= b)
	{
		cout << x << endl;
		double k = function(x);
		cout << k << endl;
		x = x + h;
		
	}


	system("pause");
	return 0;
}

int add(int a, int b)
{
	int r;
	r = a + b;
	return r;
}

void print(const int& a)
{
	cout << a << endl;
}

void duplicate(int& a)
{
	a *= 2;
}