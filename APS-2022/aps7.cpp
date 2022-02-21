// longest increasing subsequence
#include<bits/stdc++.h>
#include<strings.h>
using namespace std;
int dp[1000];
int lis(int arr[],int n){
    int i,j,k;
    for(k=0;k<n;k++){
        dp[k]=1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(arr[i]>arr[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<dp[i]<<" ";
    }
    return dp[n-1];
}
int main(){
    int i,ans,arr[1000],n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
ans=lis(arr,n);
cout<<ans<<endl;
}