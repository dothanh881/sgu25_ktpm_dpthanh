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

    int main(){
        int num1, num2, num3;
        int max;
        num1 = 6, num2 = 3, num3 = 1;
        max = findMax(num1, num2, num3);
        cout << "Các số ( " << num1 << ", " << num2 << ", " << num3 << " )" << endl << " => Số lớn nhất là: " << max << endl;
        num1 = 4, num2 = 7, num3 = 2;
        max = findMax(num1, num2, num3);
        cout << "Các số ( " << num1 << ", " << num2 << ", " << num3 << " )" << endl << " => Số lớn nhất là: " << max << endl;
        num1 = 2, num2 = 3, num3 = 8;
        max = findMax(num1, num2, num3);
        cout << "Các số ( " << num1 << ", " << num2 << ", " << num3 << " )" << endl << " => Số lớn nhất là: " << max << endl;
        num1 = 5, num2 = 5, num3 = 2;
        max = findMax(num1, num2, num3);
        cout << "Các số ( " << num1 << ", " << num2 << ", " << num3 << " )" << endl << " => Số lớn nhất là: " << max << endl;
        num1 = 4, num2 = 7, num3 = 7;
        max = findMax(num1, num2, num3);
        cout << "Các số ( " << num1 << ", " << num2 << ", " << num3 << " )" << endl << " => Số lớn nhất là: " << max << endl;
        num1 = 9, num2 = 3, num3 = 9;
        max = findMax(num1, num2, num3);
        cout << "Các số ( " << num1 << ", " << num2 << ", " << num3 << " )" << endl << " => Số lớn nhất là: " << max << endl;
        num1 = 7, num2 = 7, num3 = 7;
        max = findMax(num1, num2, num3);
        cout << "Các số ( " << num1 << ", " << num2 << ", " << num3 << " )" << endl << " => Số lớn nhất là: " << max << endl;
    }