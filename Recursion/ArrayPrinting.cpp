#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    // Base Case
    if (n < 0)
        return;

    // Recursive Call
    printArray(arr, n - 1);

    // Print Array Element
    cout << arr[n] << " ";
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    cout << "Printing Array Element Using Recursion" << endl;

    printArray(arr, n-1);
}