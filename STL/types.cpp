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
}
    //iteraror
void iterator1(){
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
    queue<int> q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace(4);//{1,2,4}
    q.back() +=5;

    cout<<q.back();//prints 9
    //Q is {1,2,9}
    cout<<q.front();//print 1
    q.pop();//{2,9}
    cout<<q.front();//prints 2
    //size swap empty same as stack
}

//PriorityQueue
void explainPQ(){
    priority_queue<int> pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    cout<<pq.top();

    //size swap empty function same as others
    //Minimum Heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}

    cout<<pq.top();//prints 2
}
//set
void explainSet(){//sorted order and unique

    set<int> st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}

    //functionality of insert in vector can be
    //used also,that only increases
    //efficiency

    //begin(),end(),rbegin(),rend(),size()
    //empty() and swap() are same as those of above

    //{1,2,3,4,5}
    auto it=st.find(3);

    //{1,2,3,4,5}
    auto it=st.find(6);//if not present, returns st.end()
    st.erase(5);//erase 5// takes logarithmic time

    int cnt=st.count(1);
    auto it=st.find(3);
    st.erase(it);//it takes constant time
    
    //{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);//after erase{1,4,5}[first,last]

    //lower_bound() & upper_bound() function works in the same way
    //as in the vector it does, this is the syntax
    auto it=st.lower_bound(2);
    auto it=st.upper_bound(3); 
}
void explainMultiSet(){
    //everything is same as set
    //only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1);//all 1's erase
    //only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1),ms.find(1)+2);//rest all func are same
}

//Unordered set
void explainUSet(){
    unordered_set<int> st;//randomized order
    //lower_bound & upper_bound functions
    //does not works , rest all functions are same 
    //as above ,it does not stores in any particular order it has a better
    //complexity than set in most cases,except some when collision happens :all cases o(1)
    //worst case o(n)
}

//MAP
void  explainMap(){//map stores unique keys in sorted order  
    map<int,int>mpp;
    map<int,pair<int,int>> mpp;
    map<pair<int,int>,int>mpp;

    mpp[1]=2;
    mpp.emplace({3,1});
    mpp.insert({2,4});
    mpp[{2,3}]=10;
    {
        {1,2}
        {2,4}
        {3,1}
    }

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mpp[1];
    cout<<mpp[5];

    auto it=mpp.find(3);
    cout<< *(it).second;

    auto it=mpp.find(5);//not in map so points to mpp.end()
    //this is syntax
    auto it=mpp.lower_bound(2);
    auti it=mpp.upper_bound(3);//erase,swap,size,empty
    //are same as above
}

//multimap
void explainMultiMap(){
    //everything same as map,only it can store multiple keys
    //only mpp[key] cannot be used
}

void explainUnOrderedMap(){
    //same as set and unordered_set difference
}

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second){
        return true;
    }else if(p1.second==p2.second){
        if(p1.first>p2.second) return true;
    }return false;
}

void explainExtra(){
    sort(a+2,a+4);
    sort(a,a+n,greater<int>);
    sort(v.begin(),v.end());
    sort(a+2,a+4);
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    //sort it according to the second element
    //if sec el. is same , then sort it acc. to first ,but in dec.
    sort(a,a+n,comp);
    //{4,1}{2,1}{1,2}

    int num=7;
    int cnt= __builtin_popcount();
    long long num=1657866578687;
    int cnt=__builtin_popcountll();

    string s="123";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end())); 
    int maxi= *max_element(a,a+n);//min_element
}