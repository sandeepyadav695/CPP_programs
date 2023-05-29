#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the temperature indegree celcius" << endl;
    cin >> n;
    if (n < 0)
    {
        cout << " freezing weather" << endl;
    }
    if (n < 10 && n >= 0)
    {
        cout << " very cold weather" << endl;
    }
    if (n > 10 && n < 20)
    {
        cout << " cold weather" << endl;
    }
    if (n > 20 && n < 30)
    {
        cout << " normal in temperature " << endl;
    }
    if (n > 30 && n < 40)
    {
        cout << " its hot" << endl;
    }
    if (n >= 40)
    {
        cout << " its very hot" << endl;
    }
    return 0;
}