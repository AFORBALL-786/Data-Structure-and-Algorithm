// Maximum number of segment required to cut the n length of rod
#include <iostream>
using namespace std;

int maximumSegment(int n, int x, int y, int z)
{
    // base case
    if (n == 0)
        return 0;

    if (n < 0)
        return INT_MIN;

    // solving one of each case
    int a = maximumSegment(n - x, x, y, z) + 1;
    int b = maximumSegment(n - y, x, y, z) + 1;
    int c = maximumSegment(n - z, x, y, z) + 1;

    int ans = max(a,max(b,c));
    if (ans < 0) ans = 0;
    return ans;
}

int main()
{
    // edit here for different test case
    int n = 8; // length of rod
    int x = 2; // length of segment 
    int y = 2; // length of segment
    int z = 2; // length of segment

    int ans = maximumSegment(n, x, y, z);
    
    cout << "Required ans is: " << ans;
}