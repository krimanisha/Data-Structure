#include<bits/stdc++.h>
using namespace std;
void linear_search(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            cout<<"Element Found"<<endl;
            return;
        }
    }
    cout<<"Element not found"<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x; //element to be searched
    cin>>x;
    linear_search(arr, n, x);
}