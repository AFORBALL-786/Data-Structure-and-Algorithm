// Last Occurence of a character by using recursion

#include <iostream>
#include <vector>
using namespace std;

// Method 1: searching left from right
void lastOccurence(string &arr, int key, int& ans, int i=0){
    // base case
    if(i > arr.length()) return;

    // recursive call
    if (arr[i] == key) ans = i;

    lastOccurence(arr, key, ans, i + 1);
}

// Method 2: Searching right from left
void LastOccurence(string &arr, int key, int &ans, int i) {
    // base case
    if (arr[i] == key ){
        ans = i;
        return;
    }

    if (i < 0) return;
    
    
    // recursive call
    LastOccurence(arr,key,ans,i-1);

}

int main()
{
    string arr;
    char key;
    int ans = -1;

    cout << "Enter the string : " << endl;
    cin >> arr;

    cout << "Enter the character : " << endl;
    cin >> key;

    //lastOccurence(arr, key, ans); // Method -> 1
    LastOccurence(arr, key, ans, arr.length() - 1); // Method -> 2

    if (ans == -1) cout << "No character exit." << endl;
    else cout << "The last occurence of '" << key << "' is : " << ans + 1;

    return 0;
}