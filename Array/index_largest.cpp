//Find index of largest element in an array.

#include<bits/stdc++.h>
using namespace std;
int indexLargest(int arr[], int n){
    int max=0;
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=i;
        }
    }
    return max;
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