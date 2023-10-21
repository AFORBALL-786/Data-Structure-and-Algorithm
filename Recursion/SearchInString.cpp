#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool flag = false;

void CheckKey(string &str, char &key, int length, int &count)
{
    // Base Case
    if (length < 0)
    {
        if (!flag)
        {
            cout << "Absent Key" << endl;
            return;
        }
        return;
    }

    // Checking For Key
    if (str[length] == key)
    {
        count = count + 1;
        flag = true;
    }

    // Recursive Call
    CheckKey(str, key, length - 1, count);
}

int main()
{
    string str;
    char key;
    int length, count = 0;

    cout << "Enter The String : ";
    cin >> str;
    length = str.length() - 1;

    cout << "Enter The key : ";
    cin >> key;

    CheckKey(str, key, length, count);

    if (flag)
        cout << "The key is repeated " << count << " times.";
}