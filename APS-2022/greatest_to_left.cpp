#include<bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
vector<int> v;
vector <int> g2l(int a[],int n){
  
  stack <int> s;
  // cout<<s.size()<<endl;
  int i,j,p;
  for(i=0;i<n;i++){
    // cout<<s.empty()<<"kk"<<endl;
    // cout<<s.top()<<endl;
    if(s.empty()){
      // cout<<"HI"<<endl;
      v.push_back(-1);}
    else if(s.top()>0 && s.top()>a[i]){
      // cout<<"foff"<<endl;
      v.push_back(s.top());}
    else if(!s.empty() && s.top()<=a[i]){
        // cout<<"fiff"<<endl;
      while(!s.empty() && s.top()<=a[i]){
        // cout<<"fiof"<<endl;
        s.pop();}
      if(s.empty()){
        // cout<<"eno"<<endl;
        v.push_back(-1);}
      else{v.push_back(s.top());}
    }
    s.push(a[i]);
    // cout<<s.top()<<endl;
  }
  // for (i=0;i<n;i++){cout<<v[i]<<" ";}
  return v;
}

int main(){

  int a[100],i,n;
  // vector<int> v;
  cin>>n;
  for(i=0;i<n;i++){cin>>a[i];}
  g2l(a,n);
  for (i=0;i<n;i++){cout<<v[i]<<" ";}
}