#include<iostream>
using namespace std ;
int main(){
    int n ; 
    cout<<"enter number of rows : " ;
    cin>> n;
    
     for(int i =1; i<=n; i++){
        int a = 65 ; 
        for(int j = 1; j<=n-i; j++){
          cout<<" " ;
        }
        for(int k =1; k<=i; k++){
            cout<<(char)a;
            a++ ; 
        }
        cout<<endl ;
    }
    return 0 ;
}