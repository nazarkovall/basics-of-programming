#include<iostream>
#include<math.h>
using namespace std;

float search_cos(float x);

int main()
{
    float x, result;
    cout << "Enter x: ";
    cin >> x;
    result = search_cos(x);
    cout << "cos" << "(" << x << "): " << result << endl;

	system("pause");
	return 0;
}

float search_cos(float x)
{
    float eps = 0.0000001, z, cosx, x1, k;

    // переводжу градуси в радіани
    x = x * (3.142 / 180.0);

    x1 = 1;
    cosx = x1;

    k = cos(x);
    int i = 1;
    do
    {
        z = 2 * i * (2 * i - 1);
        x1 = -x1 * x * x / z;
        cosx = cosx + x1;
        i = i + 1;
    } while (eps <= fabs(k - cosx));
    return cosx;
}

//Input
// 180
//Output
// -1

//Input
// 30
//Output
// 0.865991