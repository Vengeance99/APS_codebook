#include<bits/stdc++.h>
using namespace std;
void bitstuf(int arr[],int n){
    int i=0,cnt=0,j=0,nn,bsarr[100],cntnew=0;
    while(i!=n){
     cout<<cnt<<"<--";

        if(arr[i]==0){
            cout<<"heya";
            bsarr[j]=arr[i];
            j++;
            i++;
            continue;
        }
        if(cnt==4){
            cout<<"seya";
            bsarr[j]=0;
            cnt=0;
            j++;
            cntnew++;
            continue;
            
            // i++;
        }
        if(arr[i]==1 && arr[i+1]==1){
            cout<<"deya";
            bsarr[j]=arr[i];
            j++;
            i++;
            cnt++;
            continue;
            // if(cnt==4){cnt=0;}
        }
        if(arr[i]==1&& arr[i+1]==0){
            cout<<"ikk";
            bsarr[j]=arr[i];
            j++;
            i++;
            cnt++;
            if(cnt<5){cnt=0;}
            continue;
        }
        
    if(i==n){break;}
    }
    cout<<"outnow";
     cout<<cntnew<<endl;
    for(i=0;i<(n+cntnew);i++){
        cout<<bsarr[i]<<" ";
    }
}

int main()
{
    ifstream myfile;
    myfile.open("data.txt");





    int n,arr[]={1,0,1,1,1,1,1,1,0,1,1,0,1,0,1,1,1,1,1,0},bsarr[1000],arrn[100];
    n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    bitstuf(arr,n);
    for(int i = 0; i << 6; i++)
        myfile >> arrn[i];
  


}