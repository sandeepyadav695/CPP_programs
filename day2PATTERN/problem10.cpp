#include <iostream>
using namespace std;
int main()
{

    {
        int n;
        cin >> n;
        int d = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                cout << "  ";
            }

            for (int j = 0; j < (n + (n - 1)) - 2 * i; j++)
            {
                cout << " *";
                d++;
            }

            if (i <= n)
            {
                cout << endl;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 2; j < n - i; j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < 2 * i + 3; j++)
            {
                cout << " *";
            }
            cout << endl;
        }
    }
}