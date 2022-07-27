//Move all zeroes to the end
//Naive Approach:- Traversing the array from left side and as soon as we find zero, we again go to right side of
//this element 0 and then search for non-zero elemeents. Then swap with 0 and non-zero.
//Time Complexity- O(n^2)

#include<bits/stdc++.h>
using namespace std;
void moveZeroesEnd(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]== 0){
            for(int j=i+1; j<n; j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
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
    moveZeroesEnd(arr, n);
}

//Efficient Approach:-
//Traverse the array from left to right and if element is fixed from a[0] to a[i-1]. Keep count of non-zero element
//in array.
//Time Complexity-O(n)

void moveZeros(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}