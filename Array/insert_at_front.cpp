#include<bits/stdc++.h>
using namespace std;
void insert_at_front(int arr[], int n, int cap, int x){
    cout<<n<<endl;
    cout<<cap<<endl;
    if(n==cap){
        cout<<"Array is full"<<endl;
        return;
    }
    else{
        for(int i=1; i<cap; i++){
            arr[cap-i]=arr[cap-i-1];
        }
        arr[0]=x;
    }
    for(int i=0; i<cap; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n; //size of array
    cin>>n;
    int cap, x;
    cin>>cap>>x;
    int arr[cap];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insert_at_front(arr, n, cap, x);
}