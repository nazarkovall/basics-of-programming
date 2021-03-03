#include<iostream>
using namespace std;

int chek_num(int x);

int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "Prime numbers: ";

    for (int j = a; j <= b; j++)
    {
        int k = chek_num(j);
        if (k != 0)
        {
            cout << k << " ";
        }
    }
    cout << endl;

	system("pause");
	return 0;
}

int chek_num(int x)
{
    bool Prime = true;
    int m = x / 2;
    for(int i=2; i<=m; i++)
        if (x % i  == 0)
        {
            Prime = false;
            break;
        }

    if (Prime)
    {
        return x;
    }
}