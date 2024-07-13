#include<iostream>
using namespace std ;
int main(){
    int r ;
    cout<<"enter a number " ;
    cin>>r ;
    if(r%5==0 && r%3==0) cout<<"divisble by both" ;
    else cout<<"not divisble by both" ; 
    return 0 ;
}