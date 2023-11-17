// Print all subarrays using Recursion;

#include<iostream>
#include<vector>
using namespace std;

void SubArray(vector<int>&arr, int& start, int& end){

    // base case
    if(end >= arr.size()) return;

    // solving one case
    for (int i = start; i <= end; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Recursive call
    end = end + 1;
    SubArray(arr,start, end);
}

void PrintSubArray(vector<int>&arr) {
    for (int start = 0; start < arr.size(); start++)
    {
        int end = start;
        SubArray(arr, start, end);
    }
}

int main () {
    vector<int> arr{1,2,3,4,5};

    cout << "Printing all Sub Sequence of given array :" << endl;
    PrintSubArray(arr);
}