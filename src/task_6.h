//
// Created by Jamol on 23.11.2023.
//

#include <iostream>

// Recursive function to find the second largest element
int findSecondLargest(int &largest, int &secondLargest) {
    int num;
    std::cin >> num;

    if (num == 0) {
        return secondLargest;
    } else if (num > largest) {
        // Update both largest and secondLargest
        secondLargest = largest;
        largest = num;
    } else if (num > secondLargest && num != largest) {
        // Update only secondLargest
        secondLargest = num;
    }

    // Recursive call
    return findSecondLargest(largest, secondLargest);
}