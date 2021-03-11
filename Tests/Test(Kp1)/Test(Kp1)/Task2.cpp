#include<iostream>
using namespace std;

int new_num(int n);
int chek_num(int x);

int main1()
{
	int n;
    int new_n, result;
	cout << "Enter n: ";
	cin >> n;
    new_n = new_num(n);
    cout << new_n << endl;
    result = chek_num(new_n);
    cout << result << endl;

	system("pause");
	return 0;
}

int new_num(int n)
{
    int k;
    int result = 0;
    int i = 1;

    while (n > 0)
    {
        k = n % 10;

        if (i % 2 == 0)
        {
            for (int j = 0; j < (i / 2); j++)
            {
                k *= 10;
            }
            result += k;
        }
        n /= 10;
        i++;
    }
    return result;
}

int chek_num(int x)
{
    bool Prime = true;
    int m = x / 2;
    for (int i = 2; i <= m; i++)
        if (x % i == 0)
        {
            Prime = false;
            break;
        }

    if (Prime)
    {
        return true;
    }
    else
    {
        return false;
    }
}