#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter a number : " ;
    cin>>n ; 
    int a = 1; 
     for(int i = 1; i<=n; i++){
        cout<<a<<" " ;
    a = a*2 ;  ; 
    }
    return 0 ;
}