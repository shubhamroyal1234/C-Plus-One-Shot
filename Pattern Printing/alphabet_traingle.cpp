#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter number of lines : " ;
    cin>>n ;
    for(int i = 1; i<=n; i++){
        int a = 65 ; 
        for(int j=1 ; j<=i; j++){
            cout<<(char)a;
            a++ ; 
        }
        cout<<endl ; 
    }
    return 0 ;
}