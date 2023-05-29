#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cout << "enter any number or no. of rows" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            char c = 'A' + n - i + j;
            cout << c;
        }
        cout << endl;
    }
}