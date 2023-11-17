// Printing all possible binary combinary of 0's and 1's of n size by recursion method.

#include <iostream>
#include <vector>
using namespace std;

void PrintBinaryDigit(vector<int> &binary, int &size, int i = 0)
{
    // base case
    if (i == size)
    {
        for (int j = 0; j < size; j++)
            cout << binary[j];
        cout << endl;
        return;
    }

    binary[i] = 0;
    PrintBinaryDigit(binary, size, i + 1);

    binary[i] = 1;
    PrintBinaryDigit(binary, size, i + 1);
}

int main()
{
    int size;

    cout << "Enter the size : ";
    cin >> size;

    vector<int> binary(size);
    cout << "The all possible binary digit of size " << size <<" is : " << endl;
    PrintBinaryDigit(binary, size);
}