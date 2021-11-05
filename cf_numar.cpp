#include <iostream>
#include <math.h>
using namespace std;

int a,b,x,y,p;
int main(){

    cin>>a;

    x=a;
    p=1;
    while(a>9){
        p*=10;        
        a=a/10;
    }
    // cout<<a<<endl;
    //  cout<<p;
    while(x>0){
        cout<<x/p<<endl;
        x=x%p;
        p/=10;
       
    }
    /*while(a>10){
        b++;
        a/=10;
    }
     while(x>0){ 
    y=pow(10,b);
    cout<<x/y<<endl;
    x=x%y;
    b--;
   }*/
   


}