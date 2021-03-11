#include<iostream>
using namespace std;

int search_sum(int n);

int main2()
{
	int n, result;
	cout << "Enter n: ";
	cin >> n;
	
	result = search_sum(n);
	cout << "Sum: " << result << endl;
	system("pause");
	return 0;
}

int search_sum(int n)
{
	int sum, new_a;
	int a = 1;
	int i = 1;

	sum = 1;   //a0 = 1

	do
	{
		new_a = a * 3 - 5;
		sum += new_a;
		a = new_a;
		i++;
	} while (i == n - 1);

	return sum;
}

//Input
// 2
//Output
// -1

//Input
// 3
//Output
// -12