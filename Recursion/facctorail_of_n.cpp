#include<iostream>
using namespace std ;
int fact(int x){
    if(x==1) return 1 ;
    return x*fact(x-1) ;
}
int main(){
    int n ;
    cout<<"enter a number : " ;
    cin>>n ;
    int ans = fact(n);
    cout<<ans; 
    return 0 ;
}