#include<bits/stdc++.h>
using namespace std;

// int printF(int n){
//    if(n<1) return 0;
//    if(n==1) return 1;
//     return printF(n-1)+printF(n-2);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<printF(n);
//     return 0;
// }

// input array and target value in the array if value is present then print 
// yes or else print no

bool printK(int arr[],int k,int n){//1 2 3 4 || 5 || 4
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return true;
        }
    }
    return false;
}

int main(){
    int n;//4
    cin>>n;
    int k;//5
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(printK(arr,k,n)==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}