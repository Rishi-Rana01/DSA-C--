// leet-33 - https://leetcode.com/problems/search-in-rotated-sorted-array/description/
#include <iostream>
#include <vector>
using namespace std;

int search( vector<int> &nums, int tar)
{
    int st = 0, end = (int)nums.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] == tar)
            return mid;

        // Find sorted half
        
        if (nums[st] <= nums[mid]) // When left half is sorted
        {
            if (nums[st] <= tar && tar < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        { // When Right half is sorted
            if (nums[mid] < tar && tar <= nums[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 0, 1, 2};
    int tar = 0;
    cout << search(nums, tar) ;
}