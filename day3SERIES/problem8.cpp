#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, x, fact;
    float sum = 0, series, power, s;
    cout << "enter the value of n";
    cin >> n;
    cout << "enter the value of x";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        s = i + 1;
        fact = 1;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            fact = fact * j;
        }

        series = (s / fact);

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
    return 0;
}