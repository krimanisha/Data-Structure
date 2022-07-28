//Binary Search

#include<bits/stdc++.h>
using namespace std;
int binarySearchEle(int arr[], int n, int x){
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-1)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<binarySearchEle(arr,n,x);
}