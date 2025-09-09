#include <iostream>
#include <cmath>
using namespace std;

    int solveQuartic(double a, double b, double c, double x[]) {
        if (a == 0 && b == 0 && c == 0) {
            return -1;
        }

        if (a == 0 && b == 0) {
            return 0;
        }

        if (a == 0) {
            double y = -c / b;
        if (y < 0) return 0;
        x[0] = sqrt(y);
        x[1] = -sqrt(y);
        return 2;
        }

        double delta = b * b - 4 * a * c;
        if (delta < 0) return 0;
        double y1 = (-b + sqrt(delta)) / (2 * a);
        double y2 = (-b - sqrt(delta)) / (2 * a);
        int count = 0;

        if (y1 >= 0) {
            x[count++] = sqrt(y1);
            x[count++] = -sqrt(y1);
        }

        if (y2 >= 0 && y2 != y1) {
            x[count++] = sqrt(y2);
            x[count++] = -sqrt(y2);
        }
        return count;
    }

    struct TestCase {
        double a, b, c;
        const char* expected;
    };

    int main() {
        double a, b, c;
        a = 2, b = 4, c = 1;
        double x[4];
        int n = solveQuartic(a, b, c, x);

        if (n == -1) {
            cout << " Infinite solutions." << endl;

        } else if (n == 0) {
            cout << "No solution." << endl;
            
        } else {
            cout << " The equation has " << n << " real solution(s): ";
            for (int i = 0; i < n; i++) {
                cout << x[i] << " ";
            }
            cout << endl;
        }

        TestCase tests[7] = {
            {0, 0, 0, "Infinite solutions."},
            {0, 0, 5, "No solution."},
            {0, 2, -8, "2 solutions"},
            {1, 0, -1, "2 solutions"},
            {1, -5, 4, "4 solutions"},
            {1, 2, 5, "No solution."},
        };

        for (int i = 0; i < 7; i++) {
            double x[4];
            int n = solveQuartic(tests[i].a, tests[i].b, tests[i].c, x);
                cout << "Test " << i + 1 << ": (" << tests[i].a << "," << tests[i].b << "," << tests[i].c << ") -> ";
            if (n == -1) {
                cout << "n = " << n <<" => Infinite solutions.";
            } else if (n == 0) {
                cout << "n = " << n << " => No solution.";
            } else {
                cout << "n = " << n << " => " << n << " solutions";
            }
            cout << endl;
        }
        return 0;
    }