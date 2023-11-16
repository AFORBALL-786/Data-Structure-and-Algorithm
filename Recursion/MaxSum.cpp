// Find the maximum sum of non-adjacent elements

#include<iostream>
#include<vector>
using namespace std;

void MaxSum(vector<int> &arr, int &maxi, int i = 0, int sum = 0)
{
    // base case
    if(i >= arr.size()){
        maxi = max(sum, maxi);
        return;
    }

    // include
    MaxSum(arr,maxi, i+2, sum+arr[i]);

    // exclude
    MaxSum(arr,maxi, i+1, sum);
}

int main() {
    vector <int> arr{2,1,4,9};
    int maxi = INT_MIN;
    MaxSum(arr,maxi);
    cout << maxi;
}