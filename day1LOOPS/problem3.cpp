#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout << "enter the alphabet" << endl;
    cin >> alpha;
    if (alpha == 'a' || alpha == 'A' || alpha == 'e' || alpha == 'E' || alpha == 'i' || alpha == 'I' || alpha == 'o' || alpha == 'O' || alpha == 'u' || alpha == 'U')
    {
        cout << "the entred alphabet:" << alpha << " is a vowel" << endl;
    }
    else
    {
        cout << "the entered alphabet is consonant";
    }

    return 0;
}