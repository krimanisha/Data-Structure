//Inserting element into array at specific position

#include<bits/stdc++.h>
using namespace std;
void insertAtpos(int arr[], int n, int x, int cap, int pos){
    if(n==cap){
        cout<<"Array is full"<<endl;
        return;
    }
    else{
        for(int i=cap-1; i>=pos; i--){
            arr[i]=arr[i-1];
        }
        arr[pos-1]=x;
    }
    for(int i=0; i<cap; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,cap; //size and capacity of array
    cin>>n>>cap;
    int arr[cap]; //array of size n
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pos, x;
    cin>>pos>>x;
    insertAtpos(arr, n, x, cap, pos);
}