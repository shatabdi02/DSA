#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    //UNORDERED_MAP:STORING AND FETCHING O(1) and in worst /once in a blue moon/ o(n)
    map<int,int> mpp;//tc:storing and fetching takes "log of N"
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    //pre-compute
    // map<int,int> mpp;//it stores everything in sorted order
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // }

    //iterate in the map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
    return 0;
}