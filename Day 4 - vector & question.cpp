#include<iostream>
#include<vector>
using namespace std;

int findunique(vector<int>arr){
    int ans =0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    // create vector
    // vector<int>arr;

    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl;

    // // inserting some element
    // arr.push_back(5);
    // arr.push_back(7);

    // // printing the element 
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // // removing or deleting the last element
    // arr.pop_back();

    // // printing the element 
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // // creating another vector
    // vector<int>brr(10);

    // cout << "size of brr is : " << brr.size() << endl;
    // cout << "capacity of brr is : " << brr.capacity() << endl;

    // // printing the element 
    // for (int i = 0; i < brr.size(); i++)
    // {
    //     cout << brr[i] << " ";
    // }
    // cout << endl;

    // // initalizing the vector with 7 
    // vector<int>crr(10 , 7);

    // // printing the element 
    // for (int i = 0; i < crr.size(); i++)
    // {
    //     cout << crr[i] << " ";
    // }
    // cout << endl;

    // vector<int>drr;
    // cout << "vector is empty or not " << drr.empty();  //output is 1 which mean true

    // // Practice Question
    // // 1. Find the unique element where every element occurs twice except one
    // vector<int>err{1,2,4,2,1,3,6,5,5,6,4};   //3 is unique in this case

    // int answer = findunique(err);
    // cout << "The unique element is " << answer <<endl;

    // 2. union of two array

    // int arr[] = {2,4,6,8};
    // int sizea = 4;
    // int brr[] = {1,3,5,7,9};
    // int sizeb = 5;
    // vector<int>ans;
    
    // // push all element of vector arr
    // for (int i = 0; i < sizea; i++)
    // {
    //     ans.push_back(arr[i]);
    // }
    
    // // push all element of vector brr
    // for (int i = 0; i < sizeb; i++)
    // {
    //     ans.push_back(brr[i]);
    // }

    // // printing ans
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    
    // 3. Intersection
    // vector<int> arr{1,2,3,4,5,6,7};
    // vector<int> brr{2,4,6,8};
    
    // vector<int> ans;

    // // outer loop
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     // inner loop
    //     for (int j = 0; j < brr.size(); j++)
    //     {
    //         if (arr[i] == brr[j])
    //         {
    //             brr[j] = -1;  //for handling the duplication
    //             ans.push_back(arr[i]);
    //         }
    //     }
    // }

    // // print ans
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    
    
    // 4. pair sum (sum = 9)

    // vector<int> arr{1,2,3,4,5,7,6};
    
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         if(arr[i] + arr[j] == 9){
    //             cout << "(" << arr[i] << " , " << arr[j] << ")" << endl;
    //         }
    //     }
    // }

    // 5. sort 0's and 1's
    // vector<int>arr{0,1,1,0,1,0,1,0,0,1};  // solving this question using 2 pointer logic
    // int start = 0 , end = arr.size() - 1;
    
    // while (start < end){
    //     if (arr[start] == 1)
    //     {
    //         swap(arr[start] , arr[end]);
    //         end--;
    //     }
        
    //     if (arr[end] == 0)
    //     {
    //         swap(arr[start] , arr[end]);
    //         start++;
    //     }
    //     else{
    //         start++;
    //         end--;
    //     }
    // }
    
    // // print arr
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    
    
    

    return 0;
}