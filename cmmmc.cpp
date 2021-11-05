#include <iostream>
using namespace std;

int a,b,r,x,y,cmmdc,cmmmc;
int main(){

    cout <<" b= "; cin>> b;
    cout <<" a= "; cin>> a;
    x=a;
    y=b;
    r = a%b;
    while(r>0){
        a=b;
        b=r;
        r=a%b;
    }
    cmmdc=b;
    cout<<cmmdc<< endl;
    if(b>0){
        cmmmc=x*y/b;
    }else
        cmmmc=x*y;
    cout<< cmmmc<< " este cel mai mic multiplu comun";
}