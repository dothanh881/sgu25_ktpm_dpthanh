#include<iostream>
#include<cmath>
using namespace std;

    int f3(int x) {
    if (log(x * x * cos(x)) < 3 * x)
        return 2 * x;
    else
        return 2 * x;
    }

    int main(){
        int x;
        x = 3;
        cout << "f3(" << x << ") = " << f3(x) << endl;
    }