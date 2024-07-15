#include<iostream>
using namespace std ;
int main(){
    int arr[] = {1,3,0,10,2,5,6};
    int sum = 0 ; 
    int odd = 0 ;
    for(int i = 0 ; i<7; i++){
        if(arr[i]%2!=0) sum = sum+arr[i] ;
        else odd = odd+arr[i] ;
    }
    cout<<sum <<endl ;
    cout<<odd<<endl ; 
    cout<<sum-odd ;
    return 0 ;
}