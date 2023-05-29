#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, fact;
    cout << "enter the number of series";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        fact = fact / i;

        sum = sum + fact;
    }
    cout << sum;
}