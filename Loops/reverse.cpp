#include<iostream>
using namespace std ;
int main(){
    int x  ; 
    cout<<"enter a number" ;
    cin>>x ;
    int  r = 0 ;
    while ( x >0 ) {
        int ld = x%10 ; 
        r = (r*10)+ld;
        x = x/10 ; 
    }
    cout<<r ; 
    return 0 ;
}