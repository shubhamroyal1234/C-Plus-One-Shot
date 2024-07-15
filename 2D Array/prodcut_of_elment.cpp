#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter number of rows : " ;
    cin>>n ;
    int  m ;
    cout<<"entrer number of columns : " ;
    cin>>m ;
    int arr[n][m];
    for(int i = 0 ; i<n; i++){
        for(int j =0 ; j<m; j++){
            cin>>arr[i][j] ;
        }
    }
    cout<<endl ; 
    int prodcut = 1 ; 
    for(int i = 0 ; i<n; i++){
        for(int j =0 ; j<m; j++){
            prodcut = prodcut*arr[i][j] ; 
        } 
    }
  cout<<prodcut ; 
    return 0 ;
}