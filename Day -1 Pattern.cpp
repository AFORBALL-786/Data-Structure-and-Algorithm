#include<iostream>
using namespace std;
int main() {
    
    // pattern 
    int n;
    cin >> n;
    for(int row =0; row<n; row++){
        for(int col=0; col<n; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    // HOllOW PYRAMID
    int rowcount;
    int colcount;
    cin >> rowcount;
    cin >> colcount;
    for(int row=0; row<rowcount; row++){
        for (int col=0; col<colcount; col++)
        {
            if (row==0 || row==rowcount-1 || col ==0 || col == colcount-1)           
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    // HALF PYRAMID
    int rowcount;
    cin >> rowcount;
    for (int row = 0; row < rowcount; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;    
    }

    // Inverted Half Pyramid 
    int rowcount;
    cin >> rowcount;
    for (int row = rowcount; row > 0; row--)
    {
        for (int col = 0; col <row ; col++) 
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Numeric Half Pyrmaid
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << "  ";
        }
        cout << endl;
    }

    // Inverted Numeric Half Pyramid
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int  col = 0; col < n-row; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }

    // FUll PYRAMID
    int n;
    cin >> n;
    
    for (int row = 0; row < n; row++)
    {   // space
        for (int col = 0; col < n-row+1; col++)
        {
            cout << " ";
        }
        
        // star
        for (int col = 0; col < row+1; col++)  
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Inverted Full Pyramid
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // space
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // Star
        for (int col = 0; col < n-row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Numeric Full pyramid

    int n , index;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // space
        for (int col = 0; col < n-row-1; col++)
        {
            cout << "  ";
        }
        
        //left-number
        index = row;
        for (int col = 0; col < row + 1; col++)
        {
            cout << index + 1 << " ";
            index++;
        }

        // Right-number
        for (int col = 0; col < row; col++)
        {
            cout << index - 1 << " ";
            index--;
        }
        cout<<endl;
    }

    // Numeric Hollow Full Pyramid
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // space
        for (int col = 0; col < n-row-1; col++)
        {
            cout << " ";
        }

        
        for (int col = 0; col < row + 1; col++)
        {
            //number
            if (col == 0 || col == row || row == n-1)
            {
                cout << col + 1 << " ";
            }
            // Inner Space
            else{
                cout << "  ";
            }
            
        }
        cout << endl; 
    }

    // Hollow Diamod 
    int n;
    cin >> n;
    // upper Hollow Diamond
    for (int row = 0; row < n; row++)
    {
        // space
        for (int col = 0; col < n-row-1; col++)
        {
            cout << " ";
        }
        // star
        for (int col = 0; col < row+1; col++)
        {
            if (col == 0 || col == row)
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    for (int row = 0; row < n; row++)
    {
        // space
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // star
        for (int col = 0; col < n-row; col++)
        {
            if (col == 0 || col + row == n-1)
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
        
    }
    
    

    return 0;
}