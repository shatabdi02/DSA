#include<bits/stdc++.h>
using namespace std;

int main(){
    // int age;
    // cin>> age;
    // if(age>=18){
    //     cout<<"eligible to vote";
    // }
    // else if(age<18){
    //     cout<<"not eligible to vote";
    // }
    int day;
    cin>> day;
    switch(day){
        case 1:
            cout<<"monday";
            break;
        case 2:
            cout<<"tuesday";
            break;
        case 3:
            cout<<"wednesday";
            break;
        case 4:
            cout<<"thursday";
            break;
        case 5:
            cout<<"friday";
            break;
        case 6:
            cout<<"saturday";
            break;
        case 7:
            cout<<"sunday";        
            break;
        default:
            cout<<"Invalid";
    }
    cout<<"Check";
    return 0;
}