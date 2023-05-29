#include <iostream>
using namespace std;
int main()
{
    int n, s, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if (j < n)
            {
                cout << j;
                cout << " ";
            }
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << " ";
            cout << " ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << j;
            cout << " ";
        }
        cout << endl;
    }
}