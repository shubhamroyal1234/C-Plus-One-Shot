#include<iostream>
using namespace std ;
int main(){
   int n ;
   cout<<"enter the size of string : " ;
    string s[n] ;
    for(int i = 0 ; i<n; i++){
        cin>>s[i] ;
    }
    for(int i =0 ; i<n; i++){
        if(i%2==0) s[i] = 'a';
    }
    for(int i = 0 ; i<n; i++){
        cout<<s[i] ; 
    }
    return 0 ;
}