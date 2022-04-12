#include<bits/stdc++.h>
#include<string.h>

using namespace std;
struct node{
int data;
struct node *left;
struct node *right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;

}
};

int main(){
int pre[10000],in[1000],arr[1000],n,i,temp,p,q,r,j;
for(i=0;i<n;i++){
    cin>>pre[i];
    cin>>in[i];
}
for(i=0;i<n;i++){
    temp=pre[0];
    if(in[i]==temp){
        arr[0]=temp;
        break;
    }
}
p=i;
for(j=p;j>=0;j--){
    arr[j]=pre[j];
}
for(r=n-1;r>=p;r--){
    arr[r]=pre[r];
}
for(j=0;j<n;j++){
    cout<<arr[j];
}


}