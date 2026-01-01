#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int revNum=0;
    cin>>n;
    int dup=n;
    while(n>0){
        int ld=n%10;
        revNum=(revNum*10)+ld;
        n=n/10;
    }
    if(dup==revNum) cout<< "True";
    else cout<< "False";
    return 0;
}