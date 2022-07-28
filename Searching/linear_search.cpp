#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            cout<<i<<endl;
        }
    }
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
    linearSearch(arr,n,x);
}