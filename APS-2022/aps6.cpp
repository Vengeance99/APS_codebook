// ways to reach a number using 3,5,10

#include<bits/stdc++.h>
#include<strings.h>
using namespace std;
int dp[10000];
// dp[0]=1;

int ways(int arr[],int n, int nos){
    int i,j;
    dp[0]=1;
for(i=0;i<nos;i++){
   for(j=0;(j<n);j++){
       if((j-arr[i])>=0)
       {dp[i]=dp[i]+dp[j-arr[i]];}
       else{continue;}
   }
}
for(i=0;i<n;i++){
    cout<<dp[i]<<endl;
}

return dp[n-1];
}

int main(){
int n,i,arr[1000],nos,ans;
cin>>n;
cin>>nos;
for(i=0;i<nos;i++){
    cin>>arr[i];
}
ans=(ways(arr,n,nos));
cout<<ans<<endl;
}
