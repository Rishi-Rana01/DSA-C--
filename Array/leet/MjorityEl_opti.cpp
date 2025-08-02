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