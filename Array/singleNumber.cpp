// 136

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {4, 1, 2, 1, 2};
    int singleNumber = 0;

    for (int num : nums) {
        singleNumber = singleNumber^ num; // xor
    }

    cout << "The single number is: " << singleNumber << endl;
    return 0;
}