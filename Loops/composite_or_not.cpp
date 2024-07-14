#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter a number : " ;
    cin>>n ;
    int a = 1 ;
    for(int i = 2 ; i<n; i++){
        if(n%i==0) a = 0 ;
    }
    if(n==1) cout<<"no prime no composite";
     if(a==0) cout<<"it is composite number " ;
    else  cout<<"it is a prime number";
}