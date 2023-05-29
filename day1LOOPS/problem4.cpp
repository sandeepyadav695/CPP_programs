#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter the year to check it is leap year or not" << endl;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "it is leap year" << endl;
    }
    else
    {
        cout << "not a leap year" << endl;
    }
    return 0;
}