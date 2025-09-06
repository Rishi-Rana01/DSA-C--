// Armstrong number check
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0, count = 0;

    // Count digits
    while (original > 0) {
        original /= 10;
        count++;
    }

    original = n;
    // Calculate Armstrong sum
    while (original > 0) {
        int digit = original % 10;
        sum += pow(digit, count);
        original /= 10;
    }

    return sum == n;
}

int main() {
    int n = 371;
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}
