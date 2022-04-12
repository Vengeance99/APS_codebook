#include<bits/stdc++.h>
using namespace std;

void bday_fun(string year){
int m,d;
string t;

m=(pow(10,0)*(year[1]-'0'))+(pow(10,1)*(year[0]-'0'));
d=(pow(10,0)*(year[2]-'0'))+(pow(10,1)*(year[3]-'0'));

string str1=to_string(m);
string str2=to_string(d);
string str3=str1;
string str4=str2;
reverse(str3.begin(),str3.end());
reverse(str4.begin(),str4.end());
stringstream ss;  
ss<<str2;  
int i;  
ss>>i;  
stringstream sp;  
sp<<str3;  
int k;  
sp>>k;
   if (i<=31&&k<=12){
      if(k==4&&i>30){cout<<"No"<<endl;}
      else if(i==0||k==0){cout<<"No"<<endl;}
      else{
         cout<<"yes"<<endl;
         if(str4.length()==1){cout<<"sssd";
         str4+'1';}
         cout<<str1<<" "<<str2<<" "<<str3<<" "<<str4<<endl;
         cout<<str2<<" "<<str3;}

   }
   else{
  
      cout<<"No"<<endl;
   }
}

int main(){
   string year;
   cin>>year;
   bday_fun(year);
}