#include<iostream>
using namespace std ;
int power(int a , int b){
    if(b==0) return 1 ; 
    int ans =  power(a,b/2);
    if(b%2==0) return ans*ans ;
    else return ans*ans*a ; 
}
int main(){
    int a ;
    cout<<"enter a number : " ;
    cin>>a ; 
    int b ;
    cout<<"enter second number : " ;
    cin>>b ;
    int ans = power(a,b) ;
    cout<<ans;
    return 0 ;
}