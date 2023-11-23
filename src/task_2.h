//
// Created by Jamol on 23.11.2023.
//

#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 1) {
        return true;
    } else if (n % 2 != 0 || n < 2) {
        return false;
    } else {
        return isPowerOfTwo(n / 2);
    }
}