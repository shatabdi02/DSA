#include <bits/stdc++.h> 
using namespace std;

// int lowerBound(vector<int> &arr, int n, int k) {
// 	int low=0,high=n-1;
//     int ans=n;
//     while(low<=high) {
//         int mid=low+(high-low)/2;
//         if(arr[mid]>=k) {
//             ans=mid;
//             high=mid-1;//look for more small idx on left
//         }
//         else {
//             low=mid+1;//look for right
//         }
//     }
//     return  ans;
// }

// int upperBound(vector<int> &arr, int n, int k){
// 	int low=0,high=n-1;
//     int ans=n;
//     while(low<=high) {
//         int mid=low+(high-low)/2;
//         if(arr[mid]>k) {
//             ans=mid;
//             high=mid-1;//look for more small idx on left
//         }
//         else {
//             low=mid+1;//look for right
//         }
//     }
//     return  ans;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     int lb=lowerBound(arr,n,k);
//     if( lb==n || arr[lb]!=k ) return {-1,-1};
//     return {lb,upperBound(arr,n,k)-1};
// }

// int main() {
//     int n,x;
//     cin>>n >>x;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     pair<int,int> ans= firstAndLastPosition(arr,n,x);
//     cout << ans.first << " " << ans.second << endl;
//     return 0;
// }

int firstOcc (vector<int> &arr, int n, int k) { 
    int low=0,high=n-1;
    int first= -1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(arr[mid]==k) {
            first =mid;
            high =mid-1;
        }
        else if(arr[mid]<k) low=mid+1;
        else high=mid-1;
    }
    return first;
}

int lastOcc(vector<int> &arr, int n, int k) {
    int low=0,high=n-1;
    int last=-1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(arr[mid]==k) {
            last=mid;
            low=mid+1;
        }else if (arr[mid]<k) low=mid+1;
        else high=mid-1;
    }
    return last; 
}

pair<int,int> firstandLastOcc(vector<int> &arr,int n,int k) {
    int first=firstOcc(arr,n,k);
    if(first==-1) return {-1,-1};
    int last=lastOcc(arr,n,k);
    return {first,last};
}