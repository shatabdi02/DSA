#include<bits/stdc++.h>
using namespace std;

// //ONLY lowercase letters
// int main(){
//     string s;
//     cin>>s;

//     //pre-compute
//     int hash[25]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;
//         //fetch
//         cout<<hash[c-'a']<<endl;
//     }
// }

//ALPHA can be of any case in that case

int main(){
    string s;
    cin>>s;

    //pre-compute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;//it auto-casts itself to a character
//hash inside its brackets needs integer so even if it gets chat it autocast it to integer type
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }
    return 0;
}