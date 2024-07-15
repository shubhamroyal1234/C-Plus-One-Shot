#include<iostream>
using namespace std ;
int main(){
    int arr[5] = {1,2,3,4,6};
    int max = arr[0] ;
    int smax = arr[0];
    for(int i = 0 ; i<5; i++)
    {
        if(arr[i]>max){
            smax = max ;
            max = arr[i];
        }
       else if(smax<arr[i]) smax = arr[i] ; 
    }
    cout<<smax ; 
    return 0 ;
}