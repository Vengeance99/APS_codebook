#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int count_setbits(int mask){

}
int assign(int cst[][],int n){

    int i,x,mask,dp[1000],j;
    for(i=0;i<pow(2,n)-1;i++){
        dp[i]=INT_MAX;
    }
    for (mask=0;mask<pow(2,n);mask++){
        x=__builtin_popcount(mask);
        for(j=0;j<n;j++){
            if(!(j&&mask)){
     dp[mask||(1<<j)]=min(dp[mask||(1<<j)],(dp[mask]+cst[x][j]));
            }
        }
    }
}
int main(){

    int n,cst[1000][1000],i,j;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           cst[i][j]; 
        }
        
    }
   assign(cst,n);
}