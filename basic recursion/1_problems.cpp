#include<bits/stdc++.h>
using namespace std;

//to print name n times
// void print(int i,int num){//TC:o(N)
//     if(i>3) return;//sc:o(N)
//     cout<< "raj" <<endl;
//     print(i+1,num);
//     return ;
// }
// int main(){
//     int n;
//     cin>>n;
//     print(1, n);
//     return 0;
// }

//to print numbers 1 to n 
// void print(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main(){
//     int a;
//     cin>>a;
//     print(1,a);
//     return 0;
// }

//to print numbersa from n to 1
// void print(int i,int n){
//     if(i<1) return;
//     cout<<i<<endl;
//     print(i-1,n);
// }
// int main(){
//     int a;
//     cin>>a;
//     print(a,a);
//     return 0;
// }

//to print 1 to n USING BACKTRACKING
// void print(int i,int n){
//     if(i<1){
//         return;
//     }
//     print(i-1,n);
//     cout<<i<<endl;
// }
// int main(){
//     int a;
//     cin>>a;
//     print(a,a);
//     return 0;
// }

//to print n to 1
void print(int i,int n){
    if(i>n){
        return;
    }
     print(i+1,n);
     cout<<i<<endl;
}

int main(){
     int a;
     cin>>a;
     print(1,a);
     return 0;
}