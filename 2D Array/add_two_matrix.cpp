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
    int brr[n][m] ;
    cout<<"enter first matrix : " ;
    for(int i = 0 ; i<n; i++){
        for(int j =0 ; j<m; j++){
            cin>>arr[i][j] ;
        }
    }
    cout<<endl ;
    cout<<"enter second matrix : " ;
     for(int i = 0 ; i<n; i++){
        for(int j =0 ; j<m; j++){
            cin>>brr[i][j] ;
        }
    }
    cout<<endl ; 
    for(int i = 0 ; i<n; i++){
        for(int j =0 ; j<m; j++){
            cout<<arr[i][j]+brr[i][j]<<" " ;
        }
        cout<<endl ; 
    }
    return 0 ;
}