#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
    
        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target) {
                return mid;
            }
            else if(nums[mid]<target) {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;  
}

int main() {
    int n;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++) {
        int data;
        cin>>data;
        arr.push_back(data);
    }

    int target;
    cin>>target;

    int result=search(arr,target);
    cout<<result<<" ";
    return 0;
}