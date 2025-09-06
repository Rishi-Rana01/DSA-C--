// Palindrome check
#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n, reversed = 0;

    // Reverse the number
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int n = 121;
    if (isPalindrome(n)) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }
    return 0;
}
