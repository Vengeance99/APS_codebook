// Longest Common Subsequence


#include<bits/stdc++.h>
#include<strings.h>
using namespace std;
int dp[100][100];

int main()
{
memset(dp,-1,sizeof(dp));
int i,j,k,n,m;
string s1,s2;
cin>>n>>m;
cin>>s1>>s2;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(i==0||j==0){
            dp[i][j]=0;
        }
        if(s1[i-1]==s2[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
        }
        else{
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
}
cout<<dp[n-1][m-1];
}