#include <iostream>
#include <algorithm>
using namespace std;
int findgcd(int num1, int num2)
{
    int gcd, lcm, y;
    int x = min(num1, num2);
    for (int i = 1; i <= x; i++)
    {
        if (x == num1)
        {
            if (x % i == 0 && num2 % i == 0)
            {
                gcd = i;
            }
            lcm = num1 * num2 / gcd;
        }
        else
        {
            y = num2;
            num2 = num1;
            if (x % i == 0 && num2 % i == 0)
            {
                gcd = i;
                lcm = x * y / gcd;
            }
        }
    }
    cout << "the gcd of" << num1 << "  and  " << num2 << "  is   : " << lcm << endl;
}
int main()
{
    int num1, num2;
    cout << "enter the two numbers to find their gcd" << endl;
    cin >> num1 >> num2;
    findgcd(num1, num2);
    return 0;
}
