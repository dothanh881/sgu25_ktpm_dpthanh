#include<iostream>
using namespace std;

    int findMax(int num1, int num2, int num3) {
    int max = 0;
    if ((num1 > num2) && (num1 > num3))
        max = num1;
    if ((num2 > num1) && (num2 > num3))
        max = num2;
    if ((num3 > num1) && (num3 > num2))
        max = num3;
    return max;
    }

int main() {
    int num1, num2, num3, max;

    // TC1
    num1 = 12; num2 = -5; num3 = -8;
    max = findMax(num1, num2, num3);
    cout << "Các số (" << num1 << ", " << num2 << ", " << num3 << ") => Max: " << max << endl;

    // TC2
    num1 = -3; num2 = 7; num3 = -1;
    max = findMax(num1, num2, num3);
    cout << "Các số (" << num1 << ", " << num2 << ", " << num3 << ") => Max: " << max << endl;

    // TC3
    num1 = -4; num2 = -2; num3 = 5;
    max = findMax(num1, num2, num3);
    cout << "Các số (" << num1 << ", " << num2 << ", " << num3 << ") => Max: " << max << endl;

    // TC4
    num1 = 6; num2 = 6; num3 = 3;
    max = findMax(num1, num2, num3);
    cout << "Các số (" << num1 << ", " << num2 << ", " << num3 << ") => Max: " << max << endl;

    // TC5
    num1 = 2; num2 = 9; num3 = 9;
    max = findMax(num1, num2, num3);
    cout << "Các số (" << num1 << ", " << num2 << ", " << num3 << ") => Max: " << max << endl;

    // TC6
    num1 = -7; num2 = 3; num3 = -7;
    max = findMax(num1, num2, num3);
    cout << "Các số (" << num1 << ", " << num2 << ", " << num3 << ") => Max: " << max << endl;

    // TC7
    num1 = -2; num2 = -2; num3 = -2;
    max = findMax(num1, num2, num3);
    cout << "Các số (" << num1 << ", " << num2 << ", " << num3 << ") => Max: " << max << endl;
}
