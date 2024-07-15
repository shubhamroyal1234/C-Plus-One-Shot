#include<iostream>
using namespace std ;
void check(int arr[],int x){
    bool flag ; 
    for(int i = 0 ; i<x/2; i++){
        if(arr[i]!=arr[x-1-i]){
           flag = false ;
        } 
        else{
            flag = true ; 
        } 
    }
    if(flag==true) cout<<"palindome" ;
    else cout<<"not palindome" ; 

}
int main(){
    int n ;
    cout<<"enter number of sizes : " ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i] ;
    }
    check(arr,n) ;
    return 0 ;
}