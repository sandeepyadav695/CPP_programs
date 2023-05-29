#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the sides of the triangle" << endl;
    cin >> a >> b >> c;
    if (a == b || b == c || c == a)
    {
        cout << "the triangle is equilateral" << endl;
    }
    if (a == b && b != c || b == c && c != a || a == c && a != b)
    {
        cout << "the triangle is isosceles" << endl;
    }
    if (a != b && b != c && c != a)
    {
        cout << "the triangle is scalene" << endl;
    }
}