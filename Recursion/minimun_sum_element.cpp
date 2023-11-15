// finding minimum number of element required to reach target sum
#include <iostream>
using namespace std;
#include <vector>

// Method - 1
int minimumSum(vector<int> &arr, int target)
{
    // base case
    if (target == 0)
        return 0;

    if (target < 0)
        return INT_MAX;

    // solving one case
    int mini = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        int ans = minimumSum(arr, target - arr[i]);

        if (ans != INT_MAX)
            mini > ans ? (mini = ans + 1) : (mini);
    }

    return mini;
}

// Method - 2
int minimumElementSum(vector<int> &arr, int target, int output = 0)
{
    // base case
    if (output == target)
        return 0;

    if (output > target)
        return INT_MAX;

    // solving one case
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = minimumElementSum(arr, target, output + arr[i]);
        if (ans != INT_MAX)
            mini > ans ? (mini = ans + 1) : (mini);
    }

    return mini;
}

int main()
{

    vector<int> arr;
    int target, size;

    cout << "Enter the size of set: " << endl;
    cin >> size;
    cout << "Enter the element: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> target;
        arr.push_back(target);
    }

    cout << "Enter the target sum : " << endl;
    cin >> target;

    // Both method is working
    int ans = minimumSum(arr, target);
    // int ans = minimumElementSum(arr, target);

    cout << "Required answer is : " << ans;
    return 0;
}