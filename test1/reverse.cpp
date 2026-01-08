#include<bits/stdc++.h>
using namespace std;

void reverseArr(vector<int> &nums){
        int n=nums.size();
        int l=0,r=n-1;
        while(l<r){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
        return;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr.push_back(data);
    }
    reverseArr(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}