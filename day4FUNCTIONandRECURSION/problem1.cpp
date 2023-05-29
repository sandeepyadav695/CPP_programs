#include <iostream>
#include <math.h>
using namespace std;
void palindrome(int n)
{
    int p = n, rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        rev = rev * 10 + digit;
    }
    if (p == rev)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not a palindrome";
    }
}
int main()
{
    int n;
    cout << "enter the number ton check whether palindrome or not" << endl;
    cin >> n;
    palindrome(n);
    
    return 0;
}