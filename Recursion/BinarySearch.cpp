#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int start, int end, int key)
{
    // Base Case
    if (start > end)
        return -1; // invalid key

    int mid = start + (end - start) / 2;

    // if key matches
    if (arr[mid] == key)
        return mid;

    // if key > arr[mid] => right search
    if (key > arr[mid])
        return binarySearch(arr, mid + 1, end, key);

    // if key < arr[mid] => left search
    else
        return binarySearch(arr, start, mid - 1, key);
}

int main()
{
    vector<int> arr = {10, 24, 37, 40, 55, 61, 75, 84, 93, 100};
    int start = 0, end = arr.size() - 1, key;

    cout << "Enter the key : ";
    cin >> key;

    int ans = binarySearch(arr, start, end, key);
    cout << "\nAnswer is : " << ans;
}