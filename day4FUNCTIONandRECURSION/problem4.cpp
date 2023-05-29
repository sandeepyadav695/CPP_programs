#include <iostream>
#include <math.h>
using namespace std;
int perfect(int n)
{
    int add;
    add = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            add = add + i;
        }
    }

    if (add == n)
    {
        cout << n << "    " << endl;
    }
    else
    {
        cout << "galt" << endl;
    }
    return 0;
}
int main()
{
    int left, right;
    cout << "enter the range to check perfect number " << endl;
    cin >> left >> right;

    for (int i = left; i <= right; i++)
    {
        perfect(i);
    }

    return 0;
}