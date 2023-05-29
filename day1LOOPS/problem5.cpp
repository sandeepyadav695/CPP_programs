
#include <iostream>
using namespace std;
int main()
{
    int date, century, year, month, leapyear, code, monthcode, centurycode, ans;
    char day;
    cout << "enter the date" << endl;
    cin >> date;
    cout << "enter the month" << endl;
    cin >> month;
    cout << "enter the century in number only" << endl;
    cin >> century;
    cout << "enter the last two digits of the year" << endl;
    cin >> year;
    if (month == 1)
    {
        monthcode = 1;
    }
    else if (month == 2)
    {
        monthcode = 4;
    }
    else if (month == 3)
    {
        monthcode = 4;
    }
    else if (month == 4)
    {
        monthcode = 0;
    }
    else if (month == 5)
    {
        monthcode = 2;
    }
    else if (month == 6)
    {
        monthcode = 5;
    }
    else if (month == 7)
    {
        monthcode = 0;
    }
    else if (month == 8)
    {
        monthcode = 3;
    }
    else if (month == 9)
    {
        monthcode = 6;
    }
    else if (month == 10)
    {
        monthcode = 1;
    }
    else if (month == 11)
    {
        monthcode = 4;
    }
    else if (month == 12)
    {
        monthcode = 6;
    }
    else
    {
        cout << " invalid data\n";
    }

    if (century == 16)
    {
        centurycode = 0;
    }
    else if (century == 17)
    {
        centurycode = 6;
    }
    else if (century == 18)
    {
        centurycode = 4;
    }
    else if (century == 19)
    {
        centurycode = 2;
    }
    else if (century == 20)
    {
        centurycode = 0;
    }
    else if (century == 21)
    {
        centurycode = 6;
    }
    else
    {
        cout << "invalid data\n";
    }
    leapyear = year / 4;
    code = date + monthcode + centurycode + year + leapyear;
    ans = code % 7;
    if (ans == 0)
    {
        cout << "saturday";
    }

    else if (ans == 1)
    {
        cout << "sunday";
    }

    else if (ans == 2)
    {
        cout << "monday";
    }

    else if (ans == 3)
    {
        cout << "tuesday";
    }

    else if (ans == 4)
    {
        cout << "wednesday";
    }

    else if (ans == 5)
    {
        cout << "thursday";
    }

    else if (ans == 6)
    {
        cout << "friday";
    }
    else
    {
        cout << "wrong data entered -------------------------------------> \n";
    }
}
