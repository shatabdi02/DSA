#include<bits/stdc++.h>
using namespace std;

//Upper Bound is smallest index such that arr[idx]>x
int lowerBound(vector<int> arr,int n,int x) {
    int low=0,high=n-1;
    int ans=n;
    while(low<=high) {
        int mid=low+(high-low)/2;
        if(arr[mid]>x) {
            ans=mid;
            high=mid-1;//look for more small idx on left
        }
        else {
            low=mid+1;//look for right
        }
    }
    return  ans;
}

//C++STL => ub=upper_bound(arr.begin(),arr.end(),x)-arr.begin(); to get the index
//if given a specific search space then =>upper_bounr(arr+2,arr+7,x)-arr.begin();
//tc: O(log base 2 N)
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int result=lowerBound(arr,n,x);
    cout<<result<<endl;
    return 0;
}
