#include <iostream>
using namespace std;

int a,b,s;
int main(){

    cin>>a;
    b=a;
    while(a>0){
        s=s*10+a%10;
        a/=10;
    }
    if(s==b) cout<<" palindrom";
    else cout<<" nu este palindrom";
}