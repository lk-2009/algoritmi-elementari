#include <iostream>
using namespace std;

int f0, f1, f2, n, S;
int main(){

   cout<<"Fibonacci n= "; cin>>n;
    f0=f1=1;
    cout<<f0<<" "<<f1<<" ";
    S=f0+f1;
   for(int i = 2;i<n;i++){
        f2=f0+f1;
        cout<< f2<< " ";
        f0=f1;
        f1=f2;
        S=S+f2;
        
    } 
    cout<< endl<<S<<" este suma primelor "<<n<<" numere";
}
