#include<iostream>
using namespace std;

    int f2(int x) {
    if (x < 10)
        return 2 * x;
    else if (x < 2)
        return -x;
    else
        return 2 * x;
    }

  int main(){
    int x;
    x = 10;
    cout << "f2(" << x << ") = " << f2(x) << endl;   // TC1
    x = 0;
    cout << "f2(" << x << ") = " << f2(x) << endl;    // TC2
    x = 4;
    cout << "f2(" << x << ") = " << f2(x) << endl;    // TC3
    x = 14;
    cout << "f2(" << x << ") = " << f2(x) << endl;    // TC4
    return 0;
}