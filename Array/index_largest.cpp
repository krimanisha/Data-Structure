//Find index of largest element in an array.

#include<bits/stdc++.h>
using namespace std;
int indexLargest(int arr[], int n){
    for(int i=0; i<n; i++){
        bool flag=true;
        for(int j=0; j<n; j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true)
            return i;
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
    cout<<indexLargest(arr, n);
}