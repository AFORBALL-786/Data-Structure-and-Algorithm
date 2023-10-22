// Checking the given array wheather it is sorted or not in asscending order using recursion

#include<iostream>
#include<vector>
using namespace std;

bool checkSort(vector<int>&v, int size){
    // base case
    if(size <= 0)
        return true;
    
    // logic for checking given array is sorted or not
    if(v[size] < v[size-1])
        return false;

    return checkSort(v,size-1);
}

int main (){
    vector<int> v={1,3,6,9,13};

    bool ans = checkSort(v, v.size() - 1);

    if(ans)
        cout << "Given array is sorted" << endl;
    else
        cout << "Given array is not sorted" << endl;
}
