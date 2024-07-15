#include<iostream>
using namespace std ;
int sum(int arr[], int x){
    int sum = 0 ; 
    for(int i = 0 ; i<x; i++){
        sum = sum+arr[i] ;
    }
    return sum ; 
}
int main(){
    int n ;
    cout<<"enter the size of array : " ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i] ;
    }
    int ans = sum(arr,n);
    cout<<ans ; 
    return 0 ;
}