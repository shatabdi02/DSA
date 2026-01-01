#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // while(n>0){//tc-> logbase10(N)
    //     int lastDigit=n%10;
    //     cout<<lastDigit<< endl;
    //     n=n/10;
    // }
    int cnt=(int)(log10(n)+1);
    return cnt;
}    