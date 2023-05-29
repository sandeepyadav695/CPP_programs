#include <iostream>
#include <math.h>
using namespace std;
int dividenconquer(int a, int b)
{
    if (b == 0)
        return 1;
    else if (b == 1)
        return a;
    else
    {
        int c = pow(a, b / 2);
        if (b % 2 == 0)
            return c * c;
        else
        {
            return c * a * c;
        }
    }
}
int main()
{
    int x, a, b;
    cout << "enter the numbers to find their power" << endl;
    cin >> a >> b;

    x = dividenconquer(a, b);
    cout << x << endl;
}