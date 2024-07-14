#include<iostream>
using namespace std ;
void swap(int *a , int *b){
    int temp = *a ;
    *a = *b ;
    *b = temp ; //it is pass by refrence
}
int main(){
    int a = 5 ;
    int b = 7 ;
    cout<<a<<" "<<b<<endl ;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl ;
    return 0 ;
}