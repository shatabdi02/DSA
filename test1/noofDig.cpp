#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    int n;
    cin>>n;
    while(n>0){
        count++;
        n/=10;
    }
    cout<<count<<endl;
    return 0;
}
