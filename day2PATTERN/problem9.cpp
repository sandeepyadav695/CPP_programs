#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i = i + 2)
    {
        for (int space = n - i; space = space; space = space - 1)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    for (int m = 1; m <= n - 1; m = m + 2)
    {
        for (int space2 = m; space2 = space2; space2 = space2 - 1)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - m - 1; k++)
        {
            cout << " "
                 << "*";
        }
        cout << endl;
    }
    return 0;
}
