#include<iostream>
using namespace std ;
int min(int arr[],int x){
    int min = arr[0] ;
    for(int i = 0 ; i<x; i++){
        if(min>arr[i])min = arr[i] ;
    }
    return min ; 
}
int main(){
     int n ;
    cout<<"enter the size of array : " ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i] ;
    }
    int ans = min(arr,n);
    cout<<ans; 
    return 0 ;
}