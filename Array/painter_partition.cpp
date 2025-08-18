#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedTime)
{
    int painter = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedTime)
        {
            return false;
        }

        if (time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    return painter > m ? false : true;
}

int painterPartition(vector<int> &arr, int n, int m) // time complexity  o(logN*n)
{

    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    int maxTime = 0; // Initialize maxTime to find the maximum in the array
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] > maxTime)
        { // Keep track 
            maxTime = arr[i]; // what value in the index
        }
    }
    int ans = -1;
    int st = maxTime, end = sum; // Set st to maxTime
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << painterPartition(arr, n, m) << endl;
    return 0;
}