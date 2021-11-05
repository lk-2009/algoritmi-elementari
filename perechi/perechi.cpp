#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("date.in");
ofstream fout ("date.out");

int x, a, b;
int main(){

    fin >> x;
    fin >> a;
    for (int i = 1; i < x; i++)
    {
        fin >> b;
        fout << "[" << a<< " , " << b <<  "]" << endl;
        a=b;
    }
    

    return 0;
}