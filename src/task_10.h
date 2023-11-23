//
// Created by Jamol on 23.11.2023.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string permuteString(const string& s) {
    // Step 1: Identify vowels and their indices
    vector<pair<char, int>> vowels;
    for (int i = 0; i < s.length(); ++i) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels.emplace_back(s[i], i);
        }
    }

    // Step 2: Sort vowels based on ASCII values
    sort(vowels.begin(), vowels.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.first < b.first;
    });

    // Step 3: Construct the result string
    string result = s;
    for (const auto& vowel : vowels) {
        result[vowel.second] = vowel.first;
    }

    return result;
}