#include<bits/stdc++.h>
using namespace std;


int bs(int key,int n,int arr[]){
int i;

    int s=0,e=n,mid;
while(s<=e){

    mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
       e=mid;
    }
    if(arr[mid]<key){
        s=mid;
    }

}
return -1;
}

int main()
{
    int n,key,arr[100],i,x;
    cin>>n;
    cin>>key;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    x=bs(key,n,arr);
    cout<<x;
return 0;
}