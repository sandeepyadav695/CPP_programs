#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cout << "enter any number or no. of rows" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {

            cout << "  ";
        }

        for (j = 0; j <= i; j++)
        {
            cout << i + 1 - j;
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << 1 + j;
            cout << " ";
        }
        cout << endl;
    }
}