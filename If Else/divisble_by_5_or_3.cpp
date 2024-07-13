#include<iostream>
using namespace std ;
int main(){
    int r ;
    cout<<"enter a number " ;
    cin>>r ;
    if(r%5==0 || r%3==0 &&r%15!=0) cout<<"divisble by 5 or 3 but not 15 " ;
    else cout<<"not divisble " ; 
    return 0 ;
}