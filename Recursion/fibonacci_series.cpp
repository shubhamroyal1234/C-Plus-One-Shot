#include<iostream>
using namespace std ;
int fib (int x){
    if(x<=2) return 1 ; 
    return fib(x-1)+fib(x-2) ;
}
int main(){
    int n ;
    cout<<"enter a number : " ;
    cin>>n ;
  int ans =   fib(n) ;
  cout<<ans ; 
    return 0 ;
}