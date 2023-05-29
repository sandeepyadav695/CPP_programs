#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, x, fact;
    float sum = 1, series, power;
    cout << "enter the value of n";
    cin >> n;
    cout << "enter the value of x";
    cin >> x;
    for (int i = 1; i <= n - 1; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
            power = pow(x, j);
        }
        series = (power / fact);
        sum = sum + series;
    }
    cout << sum << endl;
}