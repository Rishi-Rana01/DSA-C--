#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    int n = nums.size();

    for (int val : nums) {
        int frequency = 0;
        // Count how many times this appears in the vector
        for (int el : nums) {
            if (el == val) {
                frequency++;
            }
        }

        // IMPORTANT: Check the total frequency AFTER the inner loop is done
        if (frequency > n / 2) {
            cout << "The majority element is: " << val << endl;
            return 0; // Found the answer, exit the program successfully
        }
    }

    // This part will only be reached if no majority element was found
    cout << "No majority element found." << endl;
    return 0;
}