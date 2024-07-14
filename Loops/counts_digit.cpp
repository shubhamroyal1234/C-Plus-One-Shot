#include<iostream>
using namespace std ;
int main(){
    int x  ; 
    cout<<"enter a number" ;
    cin>>x ;
    int count = 0 ;
    while ( x >0 ) {
        count++ ;
        x = x/10 ; 
    }
    cout<<count ; 
    return 0 ;
}