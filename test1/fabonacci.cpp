#include<bits/stdc++.h>
using namespace std;

// int fib(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;

//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fib(n);
//     return 0;
// }

//MULTIPLE RECURSIVE CALLS
int fib(int n){//recursion call is 2*n :: tc=o(2^n)
    if(n<=1)
        return n;
    int last=fib(n-1);
    int slast=fib(n-2);
    return last+slast;
}

int main(){
    int n;
    cin>>n;
    cout<< fib(n);
    return 0;
}