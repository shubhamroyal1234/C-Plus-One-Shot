#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
int main(){
    string s ;
    cout<<"enter a string : " ;
    cin>>s ; 
    int n = s.size();
    reverse(s.begin()+1,s.begin()+5);
    cout<<s ; 
}