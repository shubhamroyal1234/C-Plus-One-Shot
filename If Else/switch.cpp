#include<iostream>
using namespace std ;
int main(){
    
    int n ; 
    char ch ;
    int m ;
    cin>>n>>ch>>m ;
    switch(ch){
        case '+' :
        cout<<n+m ;
        break ; 
        case '-' :
        cout<<n-m ;
        break ;
        case '*' : 
        cout<<n*m ; 
        break ;
        case '/':
        cout<<n/m ;
        break ;
        default :
        cout<<"wrong input" ;
    }

    }
