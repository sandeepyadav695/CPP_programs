#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= i + (i - 1); j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}