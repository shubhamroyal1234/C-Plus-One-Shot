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
    int l1,r1,l2,r2 ; 
    cout<<"enter first cordinate : ";
    cin>>l1>>r1 ;
    cout<<"enter seond cordinate : " ;
    cin>>l2>>r2 ; 
    cout<<endl ; 
    int sum = 0 ;
    for(int i = l1 ; i<=l2; i++){
        for(int j = r1 ; j<=r2; j++){
            
            sum += arr[i][j] ;
        } 
        cout<<endl ; 
    }
    cout<<sum ; 
    return 0 ;
}