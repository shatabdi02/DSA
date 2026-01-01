#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int num) {
    int sum=0;
    int dup=num;
    while(num>0){
        int ld=num%10;
        sum=sum+(ld*ld*ld);
        num=num/10;
    }
    if(sum==dup) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    bool data=isArmstrong(n);
    cout<<data<<endl;
}