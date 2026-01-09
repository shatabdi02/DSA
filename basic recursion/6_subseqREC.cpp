#include<bits/stdc++.h>
using namespace std;

void recur(int ind,vector<int> &ds,int arr[],int n){
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return; 
    }
    ds.push_back(arr[ind]);
    recur(ind+1,ds,arr,n);
    ds.pop_back();

    recur(ind+1,ds,arr,n);

}
//tc: 2^n * n
int main(){
    int arr[]={3,1,2};
    int n=3;
    vector<int> ds;
    recur(0,ds,arr,n);
    return 0;
}