#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,len,i,p,a,k,cnt;
    string s;
    cin>>t;
    while(t--){
        cin>>len;
        cin>>s;
        cnt=0;
        for(i=0;i<len;i++){
           if(s[i]==s[i+1]) {
               if(cnt==0){cnt++;}
               cnt=cnt;}
           if(s[i]!=s[i+1]){cnt++;}
        }
     cout<<cnt<<endl;

    }
}