#include<iostream>
using namespace std ;
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i = 0 ; i<5; i++){
        if(arr[i]%2==0) arr[i] +=10 ;
        else arr[i]  = arr[i]*2 ;  
    }
    for(int i =0 ; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0 ;
}