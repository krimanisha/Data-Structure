//Remove duplicates from a sorted array

#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(int arr[], int n){
    vector<int>res;
    res.push_back(arr[0]);
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[i-1]){
            res.push_back(arr[i]);
        }
    }
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";  
    }
    cout<<endl;
    cout<<res.size()<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    removeDuplicates(arr, n);
}

//Efficient Approach
//only function written
int remDuplicates(int arr[], int n){
    int res=1;
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}