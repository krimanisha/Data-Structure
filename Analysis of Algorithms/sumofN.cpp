#include<bits/stdc++.h>
using namespace std;
//Method 1 - Time Complexity:- O(1) 
int fun1(int n){
    return (n*(n+1))/2;
}

//Method 2 - Time Complexity:- O(n)
int fun2(int n){
    int sum=0;
    for(int i=0; i<=n; i++){
        sum+=i;
    }
    return sum;
}

//Method 3 - Time Complexity:- O(n^n);
int fun3(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            sum++;
        }
    }
    return sum;
}


int main(){
    int n;
    cin>>n;
    cout<<fun1(n)<<endl;
    cout<<fun2(n)<<endl;
    cout<<fun3(n)<<endl;
}