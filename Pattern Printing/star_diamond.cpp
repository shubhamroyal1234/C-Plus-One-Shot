#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter number of lines : " ;
    cin>>n ;
    int mid = n/2 ; 
    int nst = 1 ; 
    int nsp = n/2+1 ;
    for(int i = 1 ; i<=n; i++){
        for(int j = 1; j<=nsp; j++){
            cout<<" " ;
        }
        for(int k = 1 ; k<=nst; k++){
            cout<<"*" ;
        }
        if(i<=mid){
            nst +=2;
            nsp --;
        }
        else {
            nst -=2  ;
            nsp++ ; 
        }
        cout<<endl ; 
    }

    return 0 ;
}