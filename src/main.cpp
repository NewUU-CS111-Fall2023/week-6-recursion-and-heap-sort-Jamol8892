/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_10.h"

using namespace std;

int main() {
    cout << "Task 1" << endl;

    int A, B;
    cin >> A >> B;
    printNumbers(A, B);


    cout << "Task 2" << endl;

    int n;
    cin >> n;

    if (isPowerOfTwo(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    cout << "Task 3" << endl;

    int num;
    cin >> num;

    int sum = sumOfDigits(num);
    cout << sum << endl;

    cout << "Task 4" << endl;

    int n1;
    cin >> n1;

    if (isPrime(n1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    cout << "Task 5" << endl;

    string str;
    cin >> str;

    if (isPalindrome(str, 0, str.length() - 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    cout << "Task 6: " << endl;

    int firstNumber, secondNumber;

    cin >> firstNumber >> secondNumber;

    if (firstNumber < secondNumber) {
        swap(firstNumber, secondNumber);
    }

    int theResult = findSecondLargest(firstNumber, secondNumber);

    cout << theResult << std::endl;

    cout << "Task 7: " << endl;

    int n2;
    cout << "Enter a number without zeros: ";
    cin >> n2;

    int reversedNumber = reverseDigits(n2);

    cout << "Reversed Number: " << reversedNumber << std::endl;


    cout << "Task 8: " << endl;

    string number1, number2;

    cout << "Enter the first large positive integer: ";
    cin >> number1;

    cout << "Enter the second large positive integer: ";
    cin >> number2;

    string result = karatsuba(number1, number2);

    cout << "Result: " << result << endl;

    cout << "Task 10: " << endl;

    cout << permuteString("lYmpH") << endl;  // Output: lYmpH
    cout << permuteString("newUzbekiStanunIverSIty") << endl;  // Output: nIwIzbUkaStenenevirSuty

    return 0;
}
