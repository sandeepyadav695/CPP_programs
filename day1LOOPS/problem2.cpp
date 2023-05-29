#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "enter the numbers to check the largest" << endl;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "the largest number is " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "the largest number is " << b << endl;
    }
    else if (c > a && c > b)
    {
        cout << "the largest number is " << c << endl;
    }

    return 0;
}