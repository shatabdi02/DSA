#include<bits/stdc++.h>
using namespace std;

// void rev(vector<int> &a,int l,int r){
//     if(l>=r){
//         return;
//     }
//     swap(a[l],a[r]);
//     rev(a,l+1,r-1); 
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i=0;i<n;i++){
//         int data;
//         cin>>data;
//         arr.push_back(data);
//     }
//     rev(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
  
//     return 0;
// }

//RECURSION REVERSE
// void f(int i,int arr[],int n){
//     if(i >=n/2) return;
//     swap(arr[i],arr[n-i-1]);
//     f(i+1,arr,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     f(0,arr,n);
//     for(int i=0;i<n;i++) cout<<arr[i]<< " ";
//     return 0;
// }

// STRING IS PALINDROME 
bool pal(int i,string s,int n){
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1])   return false;
    
    return pal(i+1,s,n);
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    cout<< pal(0,s,n)<<" ";
    return 0;
}