// Leet-151- https://leetcode.com/problems/reverse-words-in-a-string/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";

        // Step 1: Reverse the entire string
        reverse(s.begin(), s.end());

        // Step 2: Process each word
        for (int i = 0; i < n; i++) {
            string word = "";

            // Gather characters for one word (skip spaces)
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse individual word to restore original order
            reverse(word.begin(), word.end());

            if (word.length() > 0) {
                ans += " " + word;
            }
        }

        // Trim leading space added at the start
        return ans.substr(1);
    }
};

int main() {
    Solution sol;

    string s1 = "the sky is blue";
    string s2 = "  hello   world  ";
    string s3 = "a good   example";

    cout << "Original: \"" << s1 << "\"\nReversed: \"" 
         << sol.reverseWords(s1) << "\"\n\n";

    cout << "Original: \"" << s2 << "\"\nReversed: \"" 
         << sol.reverseWords(s2) << "\"\n\n";

    cout << "Original: \"" << s3 << "\"\nReversed: \"" 
         << sol.reverseWords(s3) << "\"\n";

    return 0;
}