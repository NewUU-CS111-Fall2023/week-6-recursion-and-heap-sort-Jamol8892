//
// Created by Jamol on 23.11.2023.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to add two strings representing integers
string add(const string& a, const string& b) {
    string result = "";
    int carry = 0;

    int i = a.size() - 1, j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        carry = sum / 10;
        sum %= 10;

        result = char(sum + '0') + result;
    }

    return result;
}

// Function to subtract two strings representing integers
string subtract(const string& a, const string& b) {
    string result = "";
    int borrow = 0;

    int i = a.size() - 1, j = b.size() - 1;

    while (i >= 0 || j >= 0) {
        int x = (i >= 0) ? (a[i--] - '0') : 0;
        int y = (j >= 0) ? (b[j--] - '0') : 0;

        int diff = x - y - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result = char(diff + '0') + result;
    }

    // Remove leading zeros
    result.erase(0, min(result.find_first_not_of('0'), result.size() - 1));

    return result;
}

// Function to multiply two large integers using Karatsuba algorithm
string karatsuba(const string& x, const string& y) {
    int n = max(x.size(), y.size());

    // Base case: if the size of numbers is small, use simple multiplication
    if (n == 1) {
        return to_string((x[0] - '0') * (y[0] - '0'));
    }

    int mid = n / 2;

    // Split the numbers into two parts
    string x1 = x.substr(0, x.size() - mid);
    string x0 = x.substr(x.size() - mid);
    string y1 = y.substr(0, y.size() - mid);
    string y0 = y.substr(y.size() - mid);

    // Recursively calculate three products needed for the Karatsuba formula
    string z2 = karatsuba(x1, y1);
    string z0 = karatsuba(x0, y0);
    string z1 = karatsuba(add(x0, x1), add(y0, y1));
    z1 = subtract(subtract(z1, z2), z0);

    // Combine the three products to get the final result
    string result = add(add(z2 + string(2 * mid, '0'), z1 + string(mid, '0')), z0);

    return result;
}
