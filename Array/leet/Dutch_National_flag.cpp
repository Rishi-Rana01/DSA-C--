//leet 75 - https://leetcode.com/problems/sort-colors/
#include <iostream>
#include <vector>
#include <algorithm>

void sortColors(std::vector<int>& nums) {
    int low = 0, mid = 0, high = static_cast<int>(nums.size()) - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            std::swap(nums[low++], nums[mid++]);
        } else if (nums[mid] == 1) {
            mid++;
        } else { // nums[mid] == 2
            std::swap(nums[mid], nums[high--]);
        }
    }
}

void printVec(const std::vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << v[i];
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> nums = {2, 0, 2, 1, 1, 0};

    std::cout << "Before: ";
    printVec(nums);

    sortColors(nums);

    std::cout << "After:  ";
    printVec(nums);

    return 0;
}