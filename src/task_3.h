//
// Created by Jamol on 23.11.2023.
//
#include <iostream>

using namespace std;

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}