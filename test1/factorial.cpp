#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num==0 || num==1){
        return 1;
    }
    int m=1;
    for(int i=1;i<=num;i++){
        m=m*i;//1,2,6,24,120
    }
    return m;
}

int main(){
    int n;
    cin>>n;
    int st=fact(n);
    cout<<st<<endl;
    return 0;
}
