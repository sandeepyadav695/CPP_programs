#include <iostream>

using namespace std;
int main()
{
    int arr[1000];
    int n;

    cout << "enter the number" << endl;
    cin >> n;
    int s = 0;
    for (int i = 1; i <= 2 * n; i++)
    {
        int s = 0;
        if (i < n)
        {
            arr[i] = i + 2;
        }
        else
        {
            if (i >= n)
            {
                arr[i] = n - s;
            }
            s++;
        }
    }
    for (int i = 0; i < 2 * n; i++)
    {
        cout << arr[i] << endl;
    }
}