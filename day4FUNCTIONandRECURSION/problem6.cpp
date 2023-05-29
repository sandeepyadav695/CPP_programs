#include <iostream>
#include <math.h>
using namespace std;
void armstrong(int n)
{
    int c = 0;
    int d, x;
    float sum = 0;
    x = n; // n=x;

    while (n > 0)
    {
        n = n / 10;
        c = c + 1;
    }
    // cout << c;
    n = x;
    while (n > 0)
    {
        d = n % 10;
        sum = sum + pow(d, c);
        n = n / 10;
    }
    if (x == sum)
    {
        cout << x << "  is an armstrong number" << endl;
    }
}
int main()
{
    int l, r;
    cout << "enter the range" << endl;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {

        armstrong(i);
    }
}