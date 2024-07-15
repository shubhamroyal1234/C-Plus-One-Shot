#include<iostream>
using namespace std ;
int count(int arr[],int x){
    int count = 0 ;
    int s = 2 ; 
    
    for(int i= 0 ; i<x ; i++){
    if(arr[i]>s){
        count++ ;
    }
    }
    return count ; 
}
int main(){
     int n ;
    cout<<"enter the size of array : " ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i] ;
    }
    int ans = count(arr,n);
    cout<<ans; 
    return 0 ;
}