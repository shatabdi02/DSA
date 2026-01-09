#include<bits/stdc++.h>
using namespace std;

void print(string s,int n){
    if(n<1) return;
    cout<<s<<endl;
    print(s,n-1);
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    print(s,n);
    return 0;
}