#include<bits/stdc++.h>
 using namespace std;
//namespace talks about scope
namespace raj{
    int val=10;
    int getVal(){
        return val*5;
    }
}
struct node{
    int i;
    double d;
    char c;
    string s;

     node(string str_,int num_, double dou_, char char_){
     s=str_;
     i=num_;
     c=char_;
     d=dou_;
    }

};
int main(){
    // int val=10;
    double val=20.0;
    // std::cout<<val << std::endl;
    // cout<<raj::val <<endl;
    // cout<<raj::getVal() <<endl;

    //wrong way
    // node n1;
    // n1.s="Striver";
    // n1.c='e';
    // n1.i='4';
    // cout<< n1.s <<endl;
    node *n3 = new node("striver",5,5.6,'r');
    // cout<<n3->d<<endl;
    node n2 = node("striver",5,5.6,'r');
    // cout<< n2.d <<endl;
    int a2[4];//{?,?,?,?}
    int a1[10]={1};//{1,0,0,0---0}
    // cout<<a1[4] <<endl;
    // cout<<a2[2] <<endl;
    array<int,4>a3={1,2,3,4};
    // cout<<a3[2] <<endl;


    array<int,5>a4;
    a4.fill(20);
    // cout<<a4[2] <<endl;

    //arrayName.at(index)
    // for(int i=0;i<4;i++){
    //     cout<<a3.at(i) <<endl;
    // }

    //iterators  
    //begin=>start elem
    //rbegin=>last elem
    //end=>after the last elem
    //rend=>before the first elem


    array<int,5>a5={5,6,7,8,9};
    auto it=a5.begin();
    // cout<<*it <<endl;
    // for(auto it=a5.begin() ; it!=a5.end(); it++){
    //     cout<<*it <<" ";
    // }
    // cout<<endl;
    // for(auto it=a5.rbegin() ; it!=a5.rend(); it++){
    //     cout<<*it <<" ";
    // }
    
    // cout<<endl;
    // for(auto it=a5.end()-1; it>=a5.begin(); it--){
    //     cout<<*it <<" ";
    // }
    //for each loop
    // for(auto it:a5){
    //     cout<<it <<" ";
    // }
    // cout<<endl;
    // string s="ganavi";
    // for(auto it:s){
    //     cout<<it <<" ";
    // }
    //size
    // cout<<a5.size() <<endl;
    //front
    //  cout<<a5.front() <<endl;
      //back
    //  cout<<a5.back() <<endl;

     //VECTOR
    //  vector<int> ar;//size of 0 -> {}
    //  cout<<ar.size() <<endl;
    //  ar.push_back(2);//{2}
    //  ar.push_back(2);//2,0}
    //  cout<<ar.size() <<endl;
    //  ar.pop_back();
    //  cout<<ar.size() <<endl;
    //  ar.push_back(2);//{2}
    //  ar.push_back(2);//2,0}
    //  cout<<ar.size() <<endl;
    //  ar.clear();//erase all elements at once
    //  cout<<ar.size() <<endl;
    // vector<int> vec1(4,0);//{0,0,0,0}
    // for(auto it:vec1){
    //     cout<<it <<" ";
    // }
    vector<int> vec2(4,10);//{10,10,10,10}

    //copy the entire vec2 to vec3

    // vector<int> vec3(vec2.begin(),vec2.end());//[) 
    //  for(auto it:vec3){
    //     cout<<it <<" ";
    // }

    // vector<int> vec3(vec2);
    //  for(auto it:vec3){
    //     cout<<it <<" ";
    // }

    vector<int> raj1;
    raj1.push_back(1);//raj1.emplace_back();
    raj1.push_back(3);
    raj1.push_back(4);
    raj1.push_back(9);

    //raj2 contains only  {1,3}
    // vector<int> raj2(raj1.begin(),raj1.begin()+2);
    //   for(auto it:raj2){
    //     cout<<it <<" ";
    // }
    vector<int> raj2(raj1.begin(),raj1.end()-2);
    //   for(auto it:raj2){
    //     cout<<it <<" ";
    // }

    //lower bound,upper bound
    //swap swap(v1,v2);
    // swap(raj1,raj2);
    //  for(auto it:raj2){
    //     cout<<it <<" ";
    // }
    //begin,end,rbegin,rend

    //to defining 2D vectors
    vector<vector<int>>vec;
    vector<int> s5;
    s5.push_back(1);
    s5.push_back(2);
    vector<int> s2;
    s2.push_back(3);
    s2.push_back(4);
    vector<int> s3;
    s3.push_back(5);
    s3.push_back(6);
    s3.push_back(7);

    vec.push_back(s5);
    vec.push_back(s2);
    vec.push_back(s3);

    // for(auto vctr:vec){
    //     for(auto it:vctr){
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<vec.size();i++){
    //     for(int j=0;j<vec[i].size();j++){
    //         cout<<vec[i][j] <<" ";
    //     }
    // }
    cout<<endl;
    //define 10*20
    // vector<vector<int>> vec3(10,vector<int>(20,0));
    //   for(auto vctr:vec3){
    //     for(auto it:vctr){
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<int> a[4];//array is not dynamic ..its fixed to 4
    //but index is dynamic..we can store dynamically inside each index
    a[0].push_back(3);
    a[0].push_back(6);
    a[1].push_back(7);
    a[1].push_back(8);
    a[1].push_back(19);
    a[3].push_back(45);
    a[3].push_back(5);
    a[3].push_back(1);

    for(auto vctr:a){
        for(auto it:vctr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    //10 *20 *30
    vector<vector<vector<int>>> v3 (10,vector<vector<int>>(10,vector<int>(20,0)));
    }


    















