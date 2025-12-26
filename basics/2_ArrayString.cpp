#include<bits/stdc++.h>
using namespace std;

int main(){
    //1D Array
    // int n;
    // cin>>n;
    // int arr[n];
    // // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // arr[3]+=10;
    // cout<<arr[3];
    
    // 2D Arrays
    // int arr[3][5];
    // arr[1][3] =78;
    // cout<< arr[1][2];

    // string s="siddhi";
    // int len=s.size();
    // s[len-1]='z';
    // cout<<s[len-1];
    // int n;
    // cin>>n;
    // vector<int> arr;
    // for(int i=0;i<n;i++){
    //     int data;
    //     cin>>data;
    //     arr.push_back(data);
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;


}