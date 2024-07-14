#include<iostream>
using namespace std  ;
int fact(int x){
    int fact =1 ; 
    for(int i =1; i<=x; i++){
        fact = fact*i ;
    }
    return fact ; 
}
int ncr(int i , int j){
    int ans = fact(i)/(fact(j)*fact(i-j));
    return ans ;
}
int main(){
    int n ;
    cout<<"enter number of lines : " ;
    cin>>n ;
    for(int i =0; i<=n; i++){
        for(int a = 1 ; a<n-i; a++){
            cout<<" " ;
        }
        for(int j = 0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl ; 
    }
    return 0 ;
}