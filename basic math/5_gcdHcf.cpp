#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;//tc:worst case o(min(m,n))
    cin>>n;
    cin>>m;
    for(int i=min(n,m);i>=1;i--){
        if(n%i==0 && m%i==0){
        cout<<i<<" ";
            break;
        }
    }
    return 0;
}