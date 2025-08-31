#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAlphaNum(char ch) {
        if ((ch >= '0' && ch <= '9') ||
            (ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z')) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int st = 0;
        int end = static_cast<int>(s.length()) - 1;

        while (st < end) {
            if (!isAlphaNum(s[st])) {
                st++;
                continue;
            }
            if (!isAlphaNum(s[end])) {
                end--;
                continue;
            }

            char a = s[st], b = s[end];
            if (a >= 'A' && a <= 'Z') a = a - 'A' + 'a';
            if (b >= 'A' && b <= 'Z') b = b - 'A' + 'a';

            if (a != b) {
                return false;
            }

            st++;
            end--;
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    string s;

    // Read a full line (including spaces/punctuation)
    if (!getline(cin, s)) return 0;

    cout << (sol.isPalindrome(s) ? "true" : "false") << '\n';
    return 0;
}