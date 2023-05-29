#include <iostream>
#include <math.h>
using namespace std;
void mean(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    float x = sum / 5;
    cout << "the mean is  : " << x << endl;
}

int median(int arr[], int n)
{
    int p, q, med;
    if (n % 2 == 0)
    {
        p = (n / 2);
        q = n / 2 + 1;
        med = (arr[p - 1] + arr[q - 1]) / 2;
        cout << "the median is : " << med << endl;
    }
    if (n % 2 != 0)
    {
        p = n / 2;
        cout << "the median is : " << arr[p] << endl;
    }
}

int main()
{
    int arr[5];
    cout << "enter the numbers to find their mean and median" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    mean(arr);
    median(arr, 5);

    return 0;
}
