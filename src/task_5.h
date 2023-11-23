//
// Created by Jamol on 23.11.2023.
//

#include <iostream>

using namespace std;

bool isPalindrome(string str, int start, int end) {
    if (start >= end) {
        return true;
    }

    if (str[start] != str[end]) {
        return false;
    }

    return isPalindrome(str, start + 1, end - 1);
}