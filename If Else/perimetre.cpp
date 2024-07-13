  #include<iostream>
using namespace std ;
    int main(){
        int l ;
        cout<<"enter lenth : " ;
        cin>>l ;
        int b ;
        cout<<"enter breadth : " ;
        cin>>b ;
        int rec =  l*b ;
        int peri = 2*(l+b) ;
        if(rec<peri) cout<<"perimter is greater " ;
        else cout<<"rec is greater " ; 
}