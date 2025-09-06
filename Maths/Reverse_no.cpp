// Reverse Integer
#include <iostream>
using namespace std;

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int n = 12345;
    cout << reverse(n) << endl;
    return 0;
}
