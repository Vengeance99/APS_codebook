#include<bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

void g2r(int a[],int n){


vector<int> v;
stack<int>  s;
int i;
// s.top()=2;
// cout<<s.empty();
for(i=n-1;i>=0;i--){
    if(s.empty()){
        v.push_back(-1);

    } 
    else if(!s.empty() && s.top()>a[i]){
        v.push_back(s.top());
    }
    else if(!s.empty() && s.top()<=a[i]){
        while(!s.empty() && s.top()<=a[i]){
            s.pop();
        }
        if(s.empty()){
            v.push_back(-1);
        }
        else{
            v.push_back(s.top());
        }
    }


s.push(a[i]);
// cout<<s.top();
}
reverse(v.begin(),v.end());
// return v;
for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}

int main(){

    int a[100],n,i,p,t;
    cin>>t;
    while(t--)
    {cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    g2r(a,n);
    }

}