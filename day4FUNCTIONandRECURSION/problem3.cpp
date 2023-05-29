#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n)
{

    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
    return 0;
}
int main()
{
    int n;
    cout << "enter the number to find its factorial" << endl;
    cin >> n;
    int ans = factorial(n);
    cout << "the factorial is " << ans << endl;

    return 0;
}