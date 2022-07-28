//Leader element in an array

//Naive Approach:- O(n^n)
#include<bits/stdc++.h>
using namespace std;
void leader(int arr[], int n){
    for(int i=0; i<n; i++){
        bool flag=false;
        for(int j=i+1; j<n; j++){
            if(arr[i]<=arr[j]){
                flag = true;
                break;
            }
        }
        if(flag==false){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    leader(arr,n);
}

//Efficient Approach:-O(n)
//Print leaders from left to right
void leaderEle(int arr[], int n){
    int curr_ldr=arr[n-1];
    cout<<curr_ldr<<" ";
    for(int i=n-2; i>=0; i--){
        if(curr_ldr<arr[i]){
            curr_ldr=arr[i];
            cout<<curr_ldr<<" ";
        }
    }
}
