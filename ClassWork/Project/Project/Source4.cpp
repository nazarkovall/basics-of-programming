#include<iostream>
using namespace std;

int GCD(int a, int b);

int main()
{
	// ����������� ���

	// 1 �����(��������� ������� �� �������)
	/*int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	cout << a << endl;*/

	//2 �����(������������ ����� �����)
	/*int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	int result;

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0 && b%i==0)
		{
			result = i;
		}
	}
	cout << "GSD: "<< result << endl;*/

	//3 �����(�� ��������� ������)
	/*int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "GCD: " << GCD(a, b) << endl;*/

	system("pause");
	return 0;
}

int GCD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return GCD(b, a % b);
}