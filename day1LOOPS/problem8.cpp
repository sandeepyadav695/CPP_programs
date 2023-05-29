#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the coordinates of the quadrant" << endl;
    cin >> a >> b;
    if (a >= 0 && b <= 0)
    {
        cout << "fourth quadrant" << endl;
    }
    else if (a >= 0 && b >= 0)
    {
        cout << "first quadrant" << endl;
    }
    else if (a <= 0 && b >= 0)
    {
        cout << "second quadrant" << endl;
    }
    else if (a <= 0 && b <= 0)
    {
        cout << "third quadrant" << endl;
    }

    return 0;
}