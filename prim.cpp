#include <iostream>
using namespace std;

int x, a;
int main()
{

    cout << " x= ";
    cin >> x;
    if (x < 2)
        a++;
    else
        for (int i = 2; i < x / 2; i++)
        {
            if (x % i == 0)
            {
                a++;
                cout << i << endl;
                break;
            }
        }
    if (a == 0)
        cout << x << " este prim";
    else
        cout << x << " nu este prim";
}