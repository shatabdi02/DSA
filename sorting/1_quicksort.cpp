#include<bits/stdc++.h>
using namespace std;
//QUICKSORTany ds in ascending order slightly bttr than mergesort

//using pointers
//Step 1=>pick up a pivot and place it in correct place
//Step 2=>Smaller on the left and larger on right
int partition(vector<int>& arr,int low,int high) {
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j) {
        while(arr[i]<=pivot && i<=high-1) {
            i++;
        }

        while(arr[j]>pivot && j>=low+1) {
            j--;
        }

        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
//timecomplexity:N log N
//scapecom: no extra space so O(1) 
void qs(vector<int>& arr,int low,int high) {
    if(low<high) {
        int pIndex = partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}

int main() {
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    qs(arr,0,n-1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}