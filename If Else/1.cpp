#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter a number : " ;
    cin>>n ;
    for(int i = 1 ; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if( i==n/2+1 || j== n/2+3) cout<<"* " ;
            else cout<<" " ; 
        }
     cout<<endl ;  
    }
}