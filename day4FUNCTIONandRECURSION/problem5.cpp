#include <iostream>
using namespace std;
int checkprime(int n)
{
    int flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag++;
        }
    }
    if (flag == 2)
    {
        cout << "   " << n << endl;
    }
    else
    {
    }
}
int main()
{
    int x, left, right;
    cout << "enter the range " << endl;
    cin >> left >> right;
    for (int i = left; i <= right; i++)
    {

        checkprime(i);
    }
}