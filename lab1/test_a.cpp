#include <iostream>
using namespace std;
int f1(int x)
{
    if (x > 10)
        return 2 * x;
    else
        return -x;
}
int main()
{
    int x;
    x = 8;
    cout << "f1(" << x << ") = " << f1(x) << endl;   // TC1
    x = 10;
    cout << "f1(" << x << ") = " << f1(x) << endl;   // TC2
    x = 15;
    cout << "f1(" << x << ") = " << f1(x) << endl;   // TC3
    x = 0;
    cout << "f1(" << x << ") = " << f1(x) << endl;   // TC4
    x = -4;
    cout << "f1(" << x << ") = " << f1(x) << endl;   // TC5
    return 0;
}
