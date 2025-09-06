// Digits in a number
#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int n = 8567;
    cout << countDigits(n) << endl;
    return 0;
}
