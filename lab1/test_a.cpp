#include<iostream>
using namespace std;

    int f1(int x) {
    if (x > 10)
        return 2 * x;
    else
        return -x;
    }

    int main(){
        int x;
        x = 7;
        cout << "f1(" << x << ") = " << f1(x) << endl;
        x = 10;
        cout << "f1(" << x << ") = " << f1(x) << endl;
        x = 24;
        cout << "f1(" << x << ") = " << f1(x) << endl;
        x = 0;
        cout << "f1(" << x << ") = " << f1(x) << endl;
        x = -5;
        cout << "f1(" << x << ") = " << f1(x) << endl;
        return 0;
    }