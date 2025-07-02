

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
        string str = "aabcbcdbca";

        int n = str.length();
        if (n == 0) return 0;

        vector<int> totalFreq(26, 0);
        int totalDistinct = 0;
        for (char ch : str) {
            if (totalFreq[ch - 'a'] == 0) {
                totalDistinct++;
            }
            totalFreq[ch - 'a']++;
        }

        vector<int> windowFreq(26, 0);
        int i = 0, j = 0, count = 0;
        int minLen = n + 1;

        while (j < n) {
        
            char ch = str[j];
            windowFreq[ch - 'a']++;

            if (windowFreq[ch - 'a'] == 1) {
                count++;  
            }

            while (count == totalDistinct) {
                minLen = min(minLen, j - i + 1);

                windowFreq[str[i] - 'a']--;
                if (windowFreq[str[i] - 'a'] == 0) {
                    count--; 
                }
                i++;
            }
            j++;
        }

        cout << minLen;
}