//
// Created by Jamol on 23.11.2023.
//
#include <iostream>
#include <cmath>
// Recursive function to reverse the digits of a number
int reverseDigits(int n) {
    // Base case: if the number has only one digit, return the number itself
    if (n < 10) {
        return n;
    }

    // Extract the last digit
    int lastDigit = n % 10;

    // Find the remaining digits without the last digit
    int remainingDigits = n / 10;

    // Calculate the number with reversed digits
    int reversedNumber = lastDigit * pow(10, log10(remainingDigits) + 1) + reverseDigits(remainingDigits);

    return reversedNumber;
}
