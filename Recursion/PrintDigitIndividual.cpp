#include <iostream>
using namespace std;

void PrintDigit(int input)
{
    // Base Case
    if(input == 0)
        return;

    // Calculation
    int temp = input/10;

    // Recursive Call
    PrintDigit(temp);

    // Printing Answer
    cout << input%10 << " ";
}

int main()
{
    int input;

    cout << "Enter the digit : " << endl;
    cin >> input;

    if(input == 0)
        cout << "Printing Individual Digit : 0" << endl;

    else{
        cout << "Printing Individual Digit : ";
        PrintDigit(input);
    }
}