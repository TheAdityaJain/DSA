// 3. Longest Substring Without Repeating Characters
// Given a string s, find the length of the longest substring without duplicate characters.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcabcbb";
    vector<int> freq(256, 0);  // ASCII character frequency tracker
    int i = 0, j = 0, maxLen = 0;

    while (j < s.size()) {
        char ch = s[j];
        freq[ch]++;

        // If the character is repeated, move `i` to shrink the window
        while (freq[ch] > 1) {
            freq[s[i]]--;
            i++;
        }

        maxLen = max(maxLen, j - i + 1);
        j++;
    }

    cout << maxLen;
}