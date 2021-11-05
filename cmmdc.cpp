#include <iostream>
using namespace std;

int a, b, rest;
int main()
{

    cout << " a= ";
    cin >> a;
    cout << " b= ";
    cin >> b;
    rest = a % b;
    while (rest > 0)
    {
        a = b;
        b=rest;
        rest = a % b;
    }
    cout<<b << " este cmmdc";
}