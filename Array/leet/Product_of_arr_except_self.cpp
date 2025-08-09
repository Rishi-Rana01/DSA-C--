// Leet-238- https://leetcode.com/problems/product-of-array-except-self/description/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Brute Force
    /* vector<int> nums = {1, 2, 3, 4};
     int n = nums.size();
     for (int i = 0; i < n; i++)
     {
         int prod = 1;
         for (int j = 0; j < n; j++)
         {
             if (i != j)
             {
                 prod *= nums[j];
             }
         }
         cout << prod<<"-";
     }*/

    // optimal

    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> prefix(n, 1), suffix(n, 1), ans(n, 1);

    // Prefix
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    // Suffix
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    // Combine (start from 0)
    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }
    // Print as "a-b-c-d"
    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
        if (i + 1 < n)
        {
            cout << "-";
        }
    }
    cout << '\n';
    return 0;
}