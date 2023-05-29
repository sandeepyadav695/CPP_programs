#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cout << "enter any number or no. of rows" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        k = i;
        for (j = 0; j <= i; j++)
        {
            cout << " " << k + 1 + j;
        }
        cout << endl;
    }
    return 0;
}