// bit stuffing


#include<bits/stdc++.h>
using namespace std;
void head(int bsarr[],int flag[],int final[],int cntfinal){
int i,j=0,k=0;
// cout<<"head"<<endl;
for(i=0;i<8;i++){
    final[i]=flag[i];

}
for(i=8;i<cntfinal+8;i++){
    final[i]=bsarr[j];
    j++;
}
for(i=cntfinal+8;i<cntfinal+16;i++){
    final[i]=flag[k];
    k++;

}
for(i=0;i<cntfinal+16;i++){
    cout<<final[i]<<" ";
}
final[cntfinal+16]=99999;

cout<<endl;
}
void tail(int bsarr[],int flag[],int final[],int cntfinal){
    
}


void bitstuf(int arr[],int n,int final[]){
    int i=0,cnt=0,j=0,nn,bsarr[100],cntnew=0,flag[]={0,1,1,1,1,1,1,0},cntfinal;
    while(i!=n){
     cout<<cnt<<"<--";

        if(arr[i]==0){
            
            bsarr[j]=arr[i];
            j++;
            i++;
            continue;
        }
        if(cnt==5){
            
            bsarr[j]=0;
            cnt=0;
            j++;
            cntnew++;
            continue;
            
            // i++;
        }
        if(arr[i]==1 && arr[i+1]==1){
           
            bsarr[j]=arr[i];
            j++;
            i++;
            cnt++;
            continue;
            // if(cnt==4){cnt=0;}
        }
        if(arr[i]==1&& arr[i+1]==0){
            
            bsarr[j]=arr[i];
            j++;
            i++;
            cnt++;
            
            if(cnt<5){cnt=0;}

            continue;
        }
        
    if(i==n){break;}
    }
    
     cout<<cntnew<<endl;
   
    
    for(i=0;i<(n+cntnew);i++){
        cout<<bsarr[i]<<" ";
    }
    cntfinal=n+cntnew;
    // cout<<cntfinal;
     head(bsarr,flag,final,cntfinal);
    tail(bsarr,flag,final,cntfinal);

}

int main()
{   
    int n,arr[]={1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0},bsarr[1000],arrn[100],final[1000],i,j=0,nn;
    // cin>>n;

    n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    bitstuf(arr,n,final);

while(final[j]!=99999){
    cout<<final[j]<<" ";
    j++;
}
// nn=sizeof(final)/sizeof(int);
cout<<endl<<j;
nn=j;
}