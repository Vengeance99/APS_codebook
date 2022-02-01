#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n)
{
    int i,j,tmp=0;
    for(i=0;i<n;i++)
    {  
        for(j=0;j<n;j++)
        { 
          if(a[j]>a[j+1])
          {
               tmp=a[j];
               a[j]=a[j+1];
               a[j+1]=tmp;
          }
        }
    }
}
int main()
{
    int n,i,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
        
    }
    return 0;
    cout<<"aps1";
}



