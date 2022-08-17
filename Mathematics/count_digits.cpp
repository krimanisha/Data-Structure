//Finding number of digits in a number
#include<bits/stdc++.h>
using namespace std;
//Iterative Solution
int count_digits(int n){
    int c=0; //counter variable
    while(n>0){
        n/=10;
        c++;
    }
    return c;
}

//Recursive Solution
int count_digits2(int n){
    if(n==0){
        return 0;
    }
    return 1+count_digits2(n/10);    
}

//Logarithmic Solution
int count_digits3(int n){
    return floor(log10(n)+1);
}

int main(){
    int n;
    cin>>n;
    cout<<count_digits(n)<<endl;
    cout<<count_digits2(n)<<endl;
    cout<<count_digits3(n)<<endl;
}