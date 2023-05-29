#include <iostream>
using namespace std;
int main()
{

    int n, i, j, k;
    cout << "enter any number or no. of rows" << endl;
    cin >> n;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            char c = 'A' + i - 1;
            cout << c;
        }
        cout << endl;
    }

    return 0;
}