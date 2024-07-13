#include<iostream>
using namespace std ;
int main(){
   int n ; 
   cout<<"enter marks percentage" ;
   cin>>n ;
   if(n>100) cout<<"invaild marks" ; 
  else  if(n>80 && n<=100) cout<<" very good" ;
   else if(n>60 && n<=80) cout<<"good" ;
   else if(n>40 && n<=60) cout<<"average" ;
   else cout<<"fail" ;
}