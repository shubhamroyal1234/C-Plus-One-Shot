#include<iostream>
using namespace std ;
int main(){
    int a ,b, c ;
    cout<<"enter a " ;
    cin>>a ;
    cout<<"enter b : ";
    cin>>b ; 
    cout<<"enter c : " ;
    cin>>c ;
    if((a+b)>c && (b+c)>a && (a+c)>b) cout<<"side of a traingle" ;
    else cout<<"invaild" ; 
    return 0 ;
}