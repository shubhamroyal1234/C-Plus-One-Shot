#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter number of lines : " ;
    cin>>n ;
    int a = 65 ; 
    for(int i = 1; i<=n; i++){
        for(int j=1 ; j<=n; j++){
            cout<<(char)a;
        }
        a++ ; 
        cout<<endl ; 
    }
    return 0 ;
}