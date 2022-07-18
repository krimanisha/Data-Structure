#include<bits/stdc++.h>
using namespace std;
void insert_at_end(int arr[], int n, int cap, int x){
    if(n==cap){
        cout<<"Array is full"<<endl;
        return;
    }
    arr[n]=x;
    for(int i=0; i<cap;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n; //size of array
    cin>>n;
    int cap; //capacity of array
    cin>>cap;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    insert_at_end(arr, n, cap, x);
}