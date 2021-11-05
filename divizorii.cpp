#include <iostream>
using namespace std;

int a,b;
int main(){

    cout<<"a= "; cin>> a;
    for(int i = 2;i<=a/2;i++){
        if(a%i == 0) cout << i << " ";
    }
}