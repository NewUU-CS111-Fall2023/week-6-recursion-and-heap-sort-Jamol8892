/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>

using namespace std;

void printNumbers(int A, int B) {
    if (A == B) {
        cout << A << endl;
        return;
    }

    if (A < B) {
        cout << A << " ";
        printNumbers(A + 1, B);
    } else {
        cout << A << " ";
        printNumbers(A - 1, B);
    }
}