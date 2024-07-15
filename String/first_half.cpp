#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
int main(){
    string s = "shubham" ;
    int n = s.size();
    reverse(s.begin(),s.begin()+n/2);
    cout<<s ; 
}