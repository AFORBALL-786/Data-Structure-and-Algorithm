// Printing all subsequence of string
#include<iostream>
#include<vector>
using namespace std;

void printSubSequence(string input, string output, int i, vector<string>& ans){
    // base case
    if(i >= input.length()){
        ans.push_back(output);
        return;
    }

    // include case
    output.push_back(input[i]);
    printSubSequence(input, output, i + 1, ans);
    output.pop_back();

    // exclude case
    printSubSequence(input, output, i+1, ans);

}

int main () {
    string input,output = "";
    vector<string> ans;
    int i = 0;

    cout << "Enter the String : ";
    cin >> input;
    
    printSubSequence(input,output,i,ans);
    
    cout << "Printing all subsequences :" << endl; 
    for(auto all : ans)
        cout << all << ", ";
}