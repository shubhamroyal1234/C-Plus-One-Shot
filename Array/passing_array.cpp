#include<iostream>
using namespace std ;
void change(int arr[]){
    arr[0] = 100 ; 
}
int main(){
    int n ;
    cout<<"enter the size of array" ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i] ;
    }
    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" "<<endl ;  ;
    }
    change(arr);
    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" " ;
    }
    return 0 ;
}