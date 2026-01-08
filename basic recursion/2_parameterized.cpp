#include<bits/stdc++.h>
using namespace std;

// void din(int i,int k){
//     if(i<1){
//         cout<<k<<endl;
//         return;
//     }
//     din(i-1,k+i);
// }

// int main(){//parameterised function
//     int n;
//     cin>>n;
//     int sums=0;
//     din(n,sums);
    
//     return 0; 
// }

// //FUNCTIONAL RECURSION
// int func(int a){
//     if(a==0){
//         return 0;
//     }
//     return a+ func(a-1);
// }
// int main(){//functional function
//     int n;
//     cin>>n;
//     int asf=func(n);
//     cout<<asf<<endl;
//     return 0;
// }

//FACTORIAL IN FUNCTIONAL Recursion
int facto(int n){
    if(n==0) return 1;
    return n* facto(n-1);
}
int main(){
    int a;
    cin>>a;
    cout<<facto(a)<<endl;
    return 0;
}