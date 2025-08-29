#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    void nextPermutation(std::vector<int>& A) {
        int n = static_cast<int>(A.size());
        int pivot = -1;

        // Find the rightmost pivot where A[i] < A[i+1]
        for (int i = n - 2; i >= 0; --i) {
            if (A[i] < A[i + 1]) {
                pivot = i;
                break;
            }
        }

        // If no pivot, it's the highest permutation; reverse to lowest
        if (pivot == -1) {
            std::reverse(A.begin(), A.end());
            return;
        }

        // Find the rightmost element greater than A[pivot] and swap
        for (int i = n - 1; i > pivot; --i) {
            if (A[i] > A[pivot]) {
                std::swap(A[i], A[pivot]);
                break;
            }
        }

        // Reverse the suffix
        std::reverse(A.begin() + pivot + 1, A.end());
    }
};

int main() {
    std::vector<int> A = {1, 2, 3};
    Solution sol;
    sol.nextPermutation(A);

    for (size_t i = 0; i < A.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << A[i];
    }
    std::cout << '\n';
    return 0;
}