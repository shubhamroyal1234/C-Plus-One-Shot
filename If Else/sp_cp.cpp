#include<iostream>
using namespace std ;
int main(){
    int cp ;
    cout<<"enter cost  price " ; 
    cin>>cp ;
    int sp ;
    cout<<"enter seeling price : " ;
    cin>>sp ; 
    if(sp==cp) cout<<"no profit no loss " ; 
    else if(sp>cp){
        sp = sp-cp ;
        cout<<"profit : "<<sp ;
    }
    else if (cp<sp){
        cp = cp-sp ;
        cout<<"loss : "<<cp ;
    }

}