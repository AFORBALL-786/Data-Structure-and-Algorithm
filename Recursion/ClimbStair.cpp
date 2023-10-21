#include<iostream>
using namespace std;

int climStair(int n){
    // Base Case
    if( n == 0 || n == 1)
        return 1;
    
    // Recursion Call
    return climStair(n-1) + climStair(n-2);

}

int main () {
    int n,ans;

    cout << "Enter the value of n" << endl;
    cin >> n;

    ans = climStair(n);
    cout << "The Required Total number of ways is " << ans;


}