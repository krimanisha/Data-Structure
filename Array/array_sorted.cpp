//Check array is sorted or not

//Naive Approach - Time Complexity-O(n^2)
#include<bits/stdc++.h>
using namespace std;
void checkSorted(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[i+1]){
                cout<<"Array is sorted"<<endl;
            }
        }
        cout<<"Array is not sorted"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    checkSorted(arr, n);
}

//Efficient Approach -  Time Complexity- O(n)
#include<bits/stdc++.h>
using namespace std;
void checkSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            cout<<"Not Sorted"<<endl;
            }
    }
    cout<<"Sorted"<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    checkSorted(arr, n);
}