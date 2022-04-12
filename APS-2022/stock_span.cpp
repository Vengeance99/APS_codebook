#include<bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
vector<int> v;
vector <int> g2l(int a[],int n){
  
  stack<pair<int, int>> s;

  int i,j,p;
  for(i=0;i<n;i++){
    
    if(s.empty()){
     
      v.push_back(-1);}
    else if(!s.empty() && s.top().first>a[i]){
    
      v.push_back(s.top().second);}
    else if(!s.empty() && s.top().first<=a[i]){
       
      while(!s.empty() && s.top().first<=a[i]){
        
        s.pop();}
      if(s.empty()){
        
        v.push_back(-1);}
      else{v.push_back(s.top().second);}
    }
    s.push({a[i],i});
    
  }
  
  return v;
}

int main(){

  int a[100],i,n;
 
  cin>>n;
  for(i=0;i<n;i++){cin>>a[i];}
  g2l(a,n);
  for (i=0;i<n;i++){cout<<i-v[i]<<" ";}
}