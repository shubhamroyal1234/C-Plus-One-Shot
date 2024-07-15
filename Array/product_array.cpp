#include<iostream>
using namespace std ;
int prodcut(int arr[], int x){
    int prodcut = 1 ; 
    for(int i = 0 ; i<x; i++){
        prodcut = prodcut*arr[i] ;
    }
    return prodcut ; 
}
int main(){
    int n ;
    cout<<"enter the size of array : " ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i] ;
    }
    int ans = prodcut(arr,n);
    cout<<ans ; 
    return 0 ;
}