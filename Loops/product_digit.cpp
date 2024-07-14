#include<iostream>
using namespace std ;
int main(){
    int x  ; 
    cout<<"enter a number" ;
    cin>>x ;
    int product = 1 ;
    while ( x >0 ) {
        int ld = x%10 ;
        product = product*ld ; 
        x = x/10 ; 
    }
    cout<<product ; 
    return 0 ;
}