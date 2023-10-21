#include <iostream>
#include <limits.h>
using namespace std;

int maxi = INT_MIN, mini = INT_MAX;

void MaxMin(int arr[], int n)
{
    // Base Case
    if (n < 0)
    {
        cout << "The maximum number in array is " << maxi << endl;
        cout << "The minimum number in array is " << mini;
        return;
    }

    maxi = max(maxi, arr[n]);
    mini = min(mini, arr[n]);

    // Recursive Call
    MaxMin(arr, n - 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, n = 10;

    cout << "Printing Array Element Using Recursion" << endl;

    MaxMin(arr, n - 1);
}