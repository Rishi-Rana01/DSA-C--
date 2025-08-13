// leet-852 = https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/1733658030/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {0, 3, 8, 9, 5, 2};

    int st = 1;
    int en = static_cast<int>(arr.size()) - 2; // avoid accessing out of bounds
    int peakIndex = -1;

    while (st <= en)
    {
        int mid = st + (en - st) / 2;

        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            peakIndex = mid;
            break;
        }
        else if (arr[mid - 1] < arr[mid])
        {
            st = mid + 1; // move right (increasing slope)
        }
        else
        {
            en = mid - 1; // move left (decreasing slope)
        }
    }

    if (peakIndex != -1)
    {
        cout << "Peak index = " << peakIndex
             << ", value = " << arr[peakIndex] << endl;
    }
    else
    {
        cout << "No internal peak found.\n";
    }

    return 0;
}