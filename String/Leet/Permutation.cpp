//Leet -567- https://leetcode.com/problems/permutation-in-string/description/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkInclusion(const string& s1, const string& s2) {
    int m = s1.size(), n = s2.size();
    if (m > n) return false;

    vector<int> need(26, 0), have(26, 0);
    for (char c : s1) need[c - 'a']++;
    for (int i = 0; i < m; ++i) have[s2[i] - 'a']++;

    if (need == have) return true;

    for (int i = m; i < n; ++i) {
        have[s2[i] - 'a']++;         // add new char
        have[s2[i - m] - 'a']--;     // remove old char
        if (need == have) return true;
    }
    return false;
}

int main() {
    string s1, s2;
    // Input: two lowercase strings (e.g., "ab eidbaooo")
    if (!(cin >> s1 >> s2)) return 0;
    cout << boolalpha << checkInclusion(s1, s2) << "\n";
    return 0;
}