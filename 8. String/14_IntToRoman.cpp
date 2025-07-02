#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
    // Define pairs of values and their corresponding Roman numerals
    vector<pair<int, string>> valueSymbols = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    
    string result = "";
    
    // Iterate through each value-symbol pair
    for (auto &pair : valueSymbols) {
        // While the number is greater than or equal to the current value
        while (num >= pair.first) {
            // Append the corresponding Roman numeral
            result += pair.second;
            // Subtract the value from the number
            num -= pair.first;
        }
    }
    
    return result;
}

int main() {
    // Test cases
    vector<int> testCases = {3, 4, 9, 58, 1994, 3999};
    
    for (int num : testCases) {
        cout << num << " -> " << intToRoman(num) << endl;
    }
    
    return 0;
}
