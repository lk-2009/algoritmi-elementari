#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");

int mn,mx,x,a,b;
int main(){

    fin>>x;
    fin>>a;
    mx=a;
    mn=mx;
    for (int i = 1; i < x; i++){
        fin>>b;
        if(mx<b) mx=b;
        if(mn>b) mn=b;
    }
    fout<<mn<<endl<<mx;
}