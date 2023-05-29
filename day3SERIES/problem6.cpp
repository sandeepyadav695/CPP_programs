#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int n, x, fact;
    float sum = 0, series, power;
    cout << "enter the value of n";
    cin >> n;
    cout << "enter the value of x";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        fact = 1;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            fact = fact * j;
        }
        power = pow(x, 2 * i + 1);
        series = (power / fact);
        if (i % 2 == 0)
        {
            sum = sum - series;
        }
        if (i % 2 != 0)
        {
            sum = sum + series;
        }
    }
    cout << sum * -1 << endl;
}