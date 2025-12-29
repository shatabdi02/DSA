#include<bits/stdc++.h>
using namespace std;

//pairs
pair<int,int> p={1,3};
cout<<p.first<<" "<<p.second;
pair<int,pair<int,int>> p={1,{2,3}};
cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;
pair<int,int> arr[]={{1,2},{2,3},{5,1}};
cout<<arr[1].second;


//vector
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2)<;

    vector<pair<int,int>> vec;

    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100);
    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);

    //iteraror
    vector<int>::iterator it=v.begin();//pointing to the memory
    it++;
    cout<< *(it) <<" "; // *it access the value in that memory location

    it=it+2;
    cout<< *(it)<< " ";

    vector<int>::iterator it=v.end();
    vector<int>::iterator it=v.rend();//never used
    vector<int>::iterator it=v.rbegin();//never used 

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" "; 

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
       cout<< *(it)<<" "
    }

    for(auto it=v.begin();it!=v.end();it++){
        cout<< *(it) <<" ";
    }

    for(auto it: v){
        cout<<it<<" ";
    }
    //{10,20,12,23}
    v.erase(v.begin()+1);
    //{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4);

    //insert FUNCTIONS  
    vector<int> v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,2,10)//{300,10,10,100,100} two occurences of 10

    vector<int> copy(2,50);//{50,50}
    v.insert(v.begin(), copy.begin(), copy.end());

    //{10,20}
    cout<<v.size();//2

    v.pop_back();//{10}
    //v1->{10,20}
    //v2->{30,40}

    v1.swap(v2);//v1->{30,40},v2->{10,20}
    v.clear();//erase the entire vector
    cout<<v.empty();
}

void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);//{2,4}

    ls.push_front(5);//{5,2,4}
    ls.emplace_front();//{2,4}
    //rest func same as vector;
    //begin ,end,.rbegin,rend,clear,insert,size,swap
}
//Deque
void explainDeque(){
    Deque<int> dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1,2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_back(3);//{3,4,1,2}

    dq.pop_back();//{3,4,1}
    dq.pop.front();//{4,1}
    dq.back();
    dq.front();//rest func same as vector;
    //begin ,end,.rbegin,rend,clear,insert,size,swap
}
//Stack
void explainStack(){//LIFO
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(3);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}

    cout<<st.top();
    st.pop();
    cout<<st.top;
    cout<<st.size();
    cout<<st.empty();
    stack<int> st1,st2;
    st1.swap(st2);
}
//Queue
void explainQueue(){
    
}
