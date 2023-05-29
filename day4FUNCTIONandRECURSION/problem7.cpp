#include <iostream>

using namespace std;
int factor(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    // cout << fact << endl;
    return fact;
}
void strongnumber(int n)
{
    int x, digit, sum = 0, temp;
    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + factor(digit);
        temp = temp / 10;
    }
    // cout << " " << sum;
    if (n == sum)
    {
        cout << n << "  : it is strong number" << endl;
    }
    // else
    // {
    //     cout << n << "   not a strong number" << endl;
    // }
}
int main()
{
    int start, end;
    cout << "enter the range" << endl;
    cin >> start >> end;
    for (int i = start; i <= end; i++)
    {
        strongnumber(i);
    }

    // factor(5);
}