// Leet 50 - https://leetcode.com/problems/powx-n/description/
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    double x = 2.0; // Initialize x to 2 (base for binary)
    long binForm = n;
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }

    double ans = 1.0; // Start with 1 (multiplicative identity)

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans = ans * x; // Multiply by base if the bit is 1
        }
        x = x * x;    // Square the base for the next higher bit
        binForm /= 2; // Move to the next binary digit
    }
    cout << "Result: " << ans << endl; // Output: 1024.0 (2^10)
}