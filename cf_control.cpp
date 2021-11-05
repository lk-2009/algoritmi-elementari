#include <iostream>
using namespace std;

int a, c;
int main()
{

    cout << "a= ";
    cin >> a;
    if (a == 0)
        c = 0;
    else if (a % 9 == 0)
        c = 9;
    else
        c = a % 9;
    cout << c << " este cf de comtrol";
}