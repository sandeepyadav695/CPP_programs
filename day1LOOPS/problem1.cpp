#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int basic, netsal, hra, da, allow, pa, totalsal, pf;
    char grade;
    cout << "enter the basic sallary" << endl;
    cin >> basic;
    cout << "enter the grade of employee" << endl;
    cin >> grade;
    if (grade == 'A' || grade == 'a')
    {
        allow = 1700;
    }
    else if (grade == 'B' || grade == 'b')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    };
    hra = 0.20 * basic;
    da = 0.5 * basic;
    pf = 0.11 * basic;
    totalsal = basic + hra + da + allow - pf;
    cout << "the total salary is : " << llround(totalsal);
    return 0;
}