#include<bits/stdc++.h>
using namespace std;

void doSomething(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

void printName(string name){
    cout<<"hey "<< name<<endl;
}
int main(){
    // string name;
    // cin>>name;
    // printName(name);

    // string name2;
    // cin>>name2;
    // printName(name2);
    // return 0;
    int num=10;
    doSomething(num);
    cout<<num<<endl;
    return 0;

}