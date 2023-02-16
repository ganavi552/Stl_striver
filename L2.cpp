#include<bits/stdc++.h>
using namespace std;
int main(){
    //**************SET*******************
    set<int> st;//sets values are in increasing order
    //set cant be accessed through indexing

    // int n;
    // cin>>n;
    // for (int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     st.insert(x);//O(N)=>stores elemesnts in l
    // }
    // for(auto it=st.begin() ; it!=st.end(); it++){
    //     cout<<*it <<" ";
    // }

    //erase functionality
    
    //  void erase (iterator position);
    //  size_type erase (const value_type& val);//logn
    //  void erase (iterator first, iterator last);


    set<int> st1={1,2,4,5,6};
    // st1.erase(st1.begin());
    //   for(auto it=st1.begin() ; it!=st1.end(); it++){
    //     cout<<*it <<" ";
    // }
    //cout<<endl;
    // st1.erase(5);
    //  for(auto it=st1.begin() ; it!=st1.end(); it++){
    //     cout<<*it <<" ";
    // }
    //cout<<endl;
    // st1.erase(st1.begin(),st1.end());
    //  for(auto it=st1.begin() ; it!=st1.end(); it++){
    //     cout<<*it <<" ";
    // }

    
    // set<int> st2(st1.begin(),st1.end());
    //   for(auto it=st2.begin() ; it!=st2.end(); it++){
    //     cout<<*it <<" ";
    // }
    // cout<<endl;
    // set<int> st3(st2);
    //   for(auto it=st3.begin() ; it!=st3.end(); it++){
    //     cout<<*it <<" ";
    // }
    //find
    set<int> st4={2,3,4,5};
     auto it1=st4.find(3);//if the elem present returns iterator else end point.
     //here it returns iterator
     auto it2=st4.find(9);//returns ser::end
     set<int> st5={1,2,3,2,4,5,4,5};//unique element it stores..it doesnt stores duplicate elementse
    //  for(auto it=st5.begin() ; it!=st5.end(); it++){
    //     cout<<*it <<" ";
    //  }
    //  cout<<endl;
    //  for(auto it:st5){
    //     cout<<it<<" ";
    //  }
     //emplace

     st5.emplace(7);
    //  for(auto it=st5.begin() ; it!=st5.end(); it++){
    //     cout<<*it <<" ";
    //  }
    //  cout<<endl;
    //COUNT: size_type count (const value_type& val) const;
    //count return 1 or 0 .bcs it stores unique elements
    //  cout<<st5.count(7)<<endl;
     //**************UNORDERED SET***************
     unordered_set<int> s1;//elements in any order
     s1.insert(4);
     s1.insert(9);
     s1.insert(5);
     s1.insert(7);
    //  s1.insert(9);
    //  s1.insert(5);
    //  s1.insert(7);
    //  for(auto it:s1){
    //      cout<<it<<" ";
    //  }
     //unordered set:avg time complexity O(N)
     //worst case-linear in nature O(set_size)

     //******************multiset*******************
     multiset<int> ms;
     //sorted order
     //it stores duplicate elements
     ms.emplace(3);
     ms.insert(4);
     ms.emplace(2);
     ms.insert(4);
     ms.emplace(3);
     ms.insert(2);
     ms.emplace(1);
     ms.insert(9);
    //  for(auto it:ms){
    //      cout<<it<<" ";
    //  }
     auto it=ms.find(2);//it returns the iterator pointing to first element 2
     //ms.clear();//deletes the entire set
    //  ms.erase(2);//the elements which having the value 2 are deleted
    //  ms.erase(ms.find(2));//it only deletes one element
    // cout<<endl;
    //  for(auto it:ms){
    //      cout<<it<<" ";
    //  }
     //ms.empty(ms.begin(),ms.end());//deletes the entire set

     //**************PAIRS****************
     //pair is a single element not a container
     pair<int,int> p;
     p={1,2};
    //  cout<<p.first<<" "<<p.second<<endl;

     pair<int,pair<int,int>> p1={1,{2,3}};
    //  cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

     pair<int,int> a[]={{1,2},{3,4},{5,6}};
    //  for(auto it:a){
    //      cout<<it.first<<" "<<it.second<<endl;
    //  }
    //  cout<<a[1].second<<endl;
    

    //*******************MAP***************
    //sorted,unique elements
    //log(n)
    map<string,int>mpp;//lexographic order and also unique elements.
    mpp.emplace("ram",56);
    mpp["jeevan"]=46;
    mpp["ananya"]=93;
    mpp["bhargav"]=32;
    mpp.insert({"ajay",19});
    //iterator insert (iterator position, const value_type& val);
    //Hint for the position where the element can be inserted.Notice that this is just a hint and does not force the new element to be inserted at that position within the map container (the elements in a map always follow a specific order depending on their key).
    mpp.insert(mpp.find("jeevan"),{"cavanya",67});
    mpp.insert(mpp.find("jeevan"),{"zavanya",67});
    mpp["ananya"]=65;//override
    // mpp.erase(mpp.begin());
    // mpp.erase(mpp.find("ananya"));
    // mpp.erase("ananya");
    // mpp.erase(mpp.begin(),mpp.find("jeevan"));
    // mpp.clear();//entired map is cleaned up
    //  s
    //  for(auto it=mpp.begin();it!=mpp.end();it++){
    //      cout<<it->first<<" "<<it->second<<endl;
    //  }
     cout<<endl;
     auto it4=mpp.find("raj");//it returns iterator which points to that value
     auto it3=mpp.find("gan");//it returns end..bcs value not present
     
    //  cout<<endl;
    //void insert (InputIterator first, InputIterator last);

    map<string,int> mpp1;
    mpp1.insert(mpp.begin(),mpp.end());
    // for(auto it:mpp1){
    //      cout<<it.first<<" "<<it.second<<endl;
    //  }
    //  cout<<endl;
    map<string,int> mpp2;
    mpp2.insert(mpp.begin(),mpp.find("bhargav"));
    // for(auto it:mpp2){
    //      cout<<it.first<<" "<<it.second<<endl;
    //  }

    //*******************UNORDERED MAP******************
    //unique elems,not sorted
    //does not stores in any order
    //O(1) in almost all classes
    //O(N) in worst case
    unordered_map<string,int> umpp;
    umpp.emplace("ram",56);
    umpp["jeevan"]=46;
    umpp["ananya"]=93;
    umpp["bhargav"]=32;
    umpp.insert({"ajay",19});
    // for(auto it=umpp.begin();it!=umpp.end();it++){
    //      cout<<it->first<<" "<<it->second<<endl;
    //  }

     //**************pairs*************
     vector<pair<int,int>> v5;//valid
     set<pair<int,int>> s9;//valid
     map<pair<int,int>,int>m7;//valid
     //unordered_map<pair<int,int>,int> ump;//inValid

     //**********************MULTI MAP *******************
     //duplicate elements,sorted order
    multimap<string,int> mmpp;
    mmpp.emplace("ram",56);
    mmpp.emplace("ram",46);
    mmpp.emplace("ananya",56);
    mmpp.emplace("ananya",6);
    mmpp.insert({"ajay",19});
    // for(auto it=mmpp.begin();it!=mmpp.end();it++){
    //      cout<<it->first<<" "<<it->second<<endl;
    //  }

     //*********************STACK*******************
     //pop
     //top
     //size
     //empty
     //push
     stack<int> stk1;
     stk1.emplace(1);
     stk1.emplace(2);
     stk1.push(3);
     stk1.push(4);
    //  while(!stk1.empty()){
    //      cout<<stk1.top()<<" ";
    //      stk1.pop();
    //  }
    // cout<<endl;
    // cout<<stk1.size()<<endl;
     stack<int>stk2;
    //  if(!stk2.empty()){
    //      cout<<stk2.top()<<endl;
    //  }
    //*******************QUEUE************
    //push,front,empty,size->O(1)
    //pop O(N)
     queue<int>q1;
     q1.emplace(3);
     q1.push(4);
     q1.emplace(5);
     q1.push(6);
    //   while(!q1.empty()){
    //      cout<<q1.front()<<" ";
    //      q1.pop();
    //  }

     //*******************PRIORITY QUEUE*****************
     //push pop
     //top size empty
     priority_queue<int>pq;//max priority queue
     pq.push(2);
     pq.push(8);
     pq.push(7);
     pq.push(11);
    //  cout<< pq.size()<<endl;
    //  while(!pq.empty()){
    //      cout<<pq.top()<<" ";
    //      pq.pop();
    //  }

    //min priority queue
    priority_queue<int>pq1;
     pq1.push(-2);
     pq1.push(-8);
     pq1.push(-7);
     pq1.push(-11);
    //    while(!pq1.empty()){
    //      cout<<-1*pq1.top()<<" ";
    //      pq1.pop();
    //  }

    priority_queue<int,vector<int>,greater<int>>pq2;
     pq2.push(2);
     pq2.push(8);
     pq2.push(7);
     pq2.push(11);
    //    while(!pq2.empty()){
    //      cout<<pq2.top()<<" ";
    //      pq2.pop();
    //  }

     priority_queue<pair<int,int>> pq3;
     pq3.push({1,4});
     pq3.push({1,2});
     pq3.push({2,3});
     pq3.push({2,4});
     pq3.push({1,9});
     pq3.push({3,9});
      while(!pq3.empty()){
         cout<<pq3.top().first<<" "<<pq3.top().second<<endl;
         pq3.pop();
     }
     //*****************DEQUEUE******************
     deque<int> d;
     //push_back()
     //push_front()
     //pop_back()
     //pop_front
     //begin end rbegin rend
     //size clear empty at

     //******************lIST****************
     list<int> ls;
     //push_back()
     //push_front()
     //pop_back()
     //pop_front
     //begin end rbegin rend
     //size clear empty at
     //remove O(1)


//give N elements,print the elements that occur maximum number of times
//input 
//5
//1 3 3 3 2
//output
//3
// int n;
// cin>>n;
// map<int,int> mpp3;
// int maxi=0;
// for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     mpp3[x]++;
//     if(mpp3[x] > mpp3[maxi]){
//         maxi=x;
//     }
// }
// cout<<maxi<<endl;

//give N elements,print all elements in sorted order
//input
//6 6 3 2 3 5
//output
//2 3 3 5 6 6
int n1;
cin>>n1;
multiset<int> ms5;
for(int i=0;i<n1;i++){
    int x;
    cin>>x;
    ms5.insert(x);
}
for(auto it:ms5){
    cout<<it <<" ";
}

}

      


    










