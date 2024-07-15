#include<iostream>
#include<string>
using namespace std ;
int main(){
    string s = "shubham" ;
    cout<<s<<endl  ;
    s.push_back('k');
    cout<<s<<endl ; 
    s.pop_back();
    cout<<s;
    return 0 ;
}