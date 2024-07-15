#include<iostream>
using namespace std ;
int max(int arr[],int x){
    int max = arr[0] ;
    for(int i = 0 ; i<x; i++){
        if(max<arr[i])max = arr[i] ;
    }
    return max ; 
}
int main(){
     int n ;
    cout<<"enter the size of array : " ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i] ;
    }
    int ans = max(arr,n);
    cout<<ans; 
    return 0 ;
}