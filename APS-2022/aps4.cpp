// knapsack(0,1) using recursion and memoisation

#include<bits/stdc++.h>
using namespace std;
int t[1000][1000];

int knapsack(int wt[],int value[],int n,int W){
if(n==0||W==0){
    return 0;
}
if(t[n][W]!=-1){
    return t[n][W];
}
if(wt[n-1]<=W){
    return t[n][W]=max(value[n-1]+knapsack(wt,value,n-1,W-wt[n-1]),knapsack(wt,value,n-1,W));
}
if(wt[n-1]>W){
    return t[n][W]=knapsack(wt,value,n-1,W);
}
return 0;
}

int main(){
    memset(t,-1,sizeof(t));
    int n,wt[10000],value[10000],W,i,j,ans;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>wt[i];
    }
    for(i=0;i<n;i++){
        cin>>value[i];
    }
    cin>>W;
    ans=knapsack(wt,value,n,W);

    // print(ans);
    cout<<ans;
    
}