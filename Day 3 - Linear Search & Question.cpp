#include<iostream>
#include<limits.h>
using namespace std;

bool linearsearch(int arr[], int size, int key) {  //function for searching element in given array.
    for (int index = 0; index < size; index++) //Searching for key.
    {
        if (arr[index] == key) 
            return true;        //if key found then return true.
        
    }

    return false;               //if key not found then return false.
    
}

void counting (int brr[], int size) {  // Function for counting 0's and 1's.
    int onecount = 0 , zerocount = 0;
    for (int index = 0; index < size; index++)
    {
        if (brr[index] == 1)
            onecount++;
        else
            zerocount++;
    }

    cout << "The total number of 1's is : " <<onecount << endl
         << "The total number of 0's is : " <<zerocount;
    
}



int main (){

    // Linear search
    int arr[7] = {2,9,6,7,4,12,15};
    int size = 7; //mentionig the size of array.
    int key;
    
    cout << "Enter the key :" << endl;
    cin >> key;

    if (linearsearch(arr, size, key))
        cout << "Found.";
    
    else
        cout << "Not Found.";


    // Question counting total number of 0's and 1's of given array.
    int brr[10] = {0,1,0,0,1,0,1,0,1,0};
    int size = 10;

    counting(brr,size);

    // Question Finding the maximum and mininum number in a given array
    int crr[] = {1,2,4,7,8,9,12,16,18,20,54,78};
    int size = 12;

    int maximun = INT_MIN;     //initalize maximun with lowest integer
    int minimun = INT_MAX;     //initalize mininum with highest integer

    for (int index = 0; index < size; index++)
    {
        if (crr[index] > maximun)      //checking for maximum number , update maximun.
            maximun = crr[index];
        
        if (crr[index] < minimun) //checking for minimun number , update minimun.    
            minimun = crr[index];
    }
    
    cout << "The Maximun number is : " << maximun <<endl
         << "The Minimun number is : " << minimun;


    // Question Extreme Print in a given array
    int drr[] = {1,2,8,9,14,28,23,46,67,89,95,99};
    int size = 12 , start = 0, end = size -1;

    while (start <=end)
    {
        if (start == end)
            cout <<drr[start];
        else{
            cout << drr[start] <<" " << drr[end] << " ";
        }
        start++;
        end--;
    }

    // Reverse an array
    int err[] = {1,2,8,9,14,28,23,46,67,89,95,99,100}; 
    int size = 13, start = 0, end = size - 1;    //worked for both odd and even number of size
    while(start < end){
        if (start < end)
        {
            swap(err[start] , err[end]);  //swapping the extreme value in a array
        }
        start++;
        end--;
    }

    for (int index = 0; index < size; index++)
    {
        cout << err[index] << " ";         //printing the values 
    }

    return 0;
}