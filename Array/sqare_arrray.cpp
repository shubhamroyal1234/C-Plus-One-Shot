#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the size of array : " ;
    cin>>n ;
    int arr[n];
   int a = 1;
    for(int i = 0 ; i<n; i++){
        cout<<a*a<<" " ;
        a++ ; 
    }
    return 0 ;
}