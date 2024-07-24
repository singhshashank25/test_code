#include <bits/stdc++.h>
using namespace std;


int tofindmaxsum(int n,vector<int>&arr){  // find the maximum sum of a contiguous subarray
    int sum = 0,curr_sum = 0;
    for(int i = 0;i<n;i++){
        curr_sum = max(curr_sum+arr[i],arr[i]);
        sum = max(sum,curr_sum);
    }
    return sum;
}


// function to reverse the array.


// void to_reverse_vector(int low ,int high,vector<int>&arr){
//     while(high>=low){
//         swap(arr[low],arr[high]);
//         low++;high--;
//     }
//     return;
// }


//using inbuild function to reverse the array.

void rotate_array(int k,vector<int>&arr){    //function to rotate an array by k positions. 
     reverse(arr.begin(),arr.end());
     reverse(arr.begin()+k,arr.end());
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++)cin>>arr[i];
    cout<<tofindmaxsum(n,arr)<<endl;
    int k;
    cin>>k;
    rotate_array(k,arr);  // always k should be less n( size of array)
    for(auto it:arr)cout<<it<<" ";
}