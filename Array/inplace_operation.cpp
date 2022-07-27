//Given an Array of integers, return an Array where every element at an even-indexed position is squared.
#include<bits/stdc++.h>
using namespace std;
void evenIndexedSqEle(int arr[], int n){
    for(int i=0; i<n; i++){
        if(i%2==0){
            arr[i]*=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    evenIndexedSqEle(arr,n);
}