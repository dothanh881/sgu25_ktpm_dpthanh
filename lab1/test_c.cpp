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
        cout << "f2(" << x << ") = " << f2(x) << endl;
        x = 0;
        cout << "f2(" << x << ") = " << f2(x) << endl;
        x = -5;
        cout << "f2(" << x << ") = " << f2(x) << endl;
        x = 13;
        cout << "f2(" << x << ") = " << f2(x) << endl;
        return 0;
    }