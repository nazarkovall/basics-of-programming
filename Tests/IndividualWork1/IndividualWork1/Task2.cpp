#include <iostream>
using namespace std;

int ChangeNum(int x);

int main1()
{
	int n, result;

	cout << "Enter binary number: ";
	cin >> n;

	result = ChangeNum(n);
	cout << "Decimal number: " << result << endl;

	system("pause");
	return 0;
}

int ChangeNum(int x)
{
	int number = x;
	int n = number;
	int k = 0;
	int p = 1;
	int last;

	while (n)
	{
		last = n % 10;
		n /= 10;
		k += last * p;
		p *= 2;
	}
	return k;
}

//Input:
// 1111
//Output:
// 15

//Input:
// 111
//Output:
// 7

//Input:
// 100
//Output:
// 4