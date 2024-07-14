#include<iostream>
using namespace std ;
void fun(int n , int x){
    if(n<x) return ; 
    fun(n-1,x);
    cout<<n<<" " ; 
}
int main(){
    int n ;
    cout<<"enter a number : " ;
    cin>>n ; 
    fun(n,1) ;
    return 0 ;
}