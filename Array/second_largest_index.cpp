#include<bits/stdc++.h>
using namespace std;
//first find the largest
int indexLargest(int arr[], int n){
    int max=0;
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=i;
        }
    }
    return max;
}
int secondLargest(int arr[], int n){
    int largest=indexLargest(arr,n);
    int res=-1;
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[largest]){
            if(res==-1){
                res=i;
            }
            else if(arr[i]>arr[res]){
                res=i;
            }
        }     
    }
    return res;
}
//Efficient Approach:- O(n)
int secLargest(int arr[], int n){
    int res= -1, largest=0;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<secondLargest(arr, n);
}