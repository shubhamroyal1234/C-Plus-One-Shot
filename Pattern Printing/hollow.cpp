#include<iostream>
using namespace std ;
int main(){
    int n ; 
    cout<<"enter number of rows : " ;
    cin>> n;
    int m ;
    cout<<"enter no of columns : " ;
    cin>>m ; 
     for(int i =1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(i==1 || i==n || j==1 || j==m)cout<<"*";
            else cout<<" " ;
        }
        cout<<endl ;
    }
    return 0 ;
}