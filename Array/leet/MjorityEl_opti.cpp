#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};
    int n = nums.size();
    // sorting
    sort(nums.begin(), nums.end());
    // {1,1,1,2,2}

    // Freq Count
    int freq=1, ans = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i]==nums[i-1])
        {
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            cout<< ans<<endl;

        }
        
    }
    
}
// If the program survived i=0 and moved to i=1 (unlikely but for demonstration):

// i = 1:
// nums[i] is nums[1] which is 1.
// nums[i-1] is nums[0] which is 1.
// if (nums[i] == nums[i-1]) -> if (1 == 1) -> True.
// freq++ -> freq becomes 2.
// if (freq > n/2) -> if (2 > 2) -> False. Nothing printed.
// i = 2:

// nums[i] is nums[2] which is 1.
// nums[i-1] is nums[1] which is 1.
// if (nums[i] == nums[i-1]) -> if (1 == 1) -> True.
// freq++ -> freq becomes 3.
// if (freq > n/2) -> if (3 > 2) -> True.
// cout << ans << endl; -> Prints 1.
// i = 3:

// nums[i] is nums[3] which is 2.
// nums[i-1] is nums[2] which is 1.
// if (nums[i] == nums[i-1]) -> if (2 == 1) -> False.
// else block:
// freq = 1 -> freq becomes 1.
// ans = nums[i] -> ans becomes 2.
// if (freq > n/2) -> if (1 > 2) -> False. Nothing printed.
// i = 4:

// nums[i] is nums[4] which is 2.
// nums[i-1] is nums[3] which is 2.
// if (nums[i] == nums[i-1]) -> if (2 == 2) -> True.
// freq++ -> freq becomes 2.
// if (freq > n/2) -> if (2 > 2) -> False. Nothing printed.