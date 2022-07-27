//Left rotate an array by d

//Naive Approach
#include<bits/stdc++.h>
using namespace std;
void leftRotateByOne(int arr[], int n){
    int temp=arr[0];
    for(int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void leftRotateByD(int arr[], int n, int d){
    for(int i=0; i<d; i++){
        leftRotateByOne(arr,n);
    }
}
void printRotatedArray(int arr[], int n){
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
    int d;
    cin>>d;
    leftRotateByD(arr, n, d);
    printRotatedArray(arr, n);
}

//Optimized Approach
void leftRotate(int arr[], int n, int d){
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i]=arr[i];
    }
    for(int i=d; i<n; i++){
        arr[i-d]=arr[i];
    }
    for(int i=0; i<d; i++){
        arr[n-d+i]=temp[i];
    }
}

//Efficient Approach:- Reversal Algorithm
void reverse(int arr[], int low, int high){
    // int low=0, high=n-1;
    while(low<high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void leftRotate(int arr[], int n, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}