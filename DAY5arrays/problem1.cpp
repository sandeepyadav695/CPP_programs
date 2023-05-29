#include<iostream>
#include<vector>
using namespace std;

    int chocolates(int n, vector<int> &arr)
    {
        int min;
        min = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (min >= arr[i])
            {
                min = arr[i];
            }
        }
        return min;
    }

int main(){

}