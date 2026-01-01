#include<bits/stdc++.h>
using namespace std;
int printDivisors(int x){
    for(int i=1;i<=x;i++){
        if(x%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    vector<int> ff= printDivisors(n);
    return ff{};
}