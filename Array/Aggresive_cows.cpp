#include <iostream>
#include <vector>
using namespace std;

int getDistance(vector<int> &arr, int N , int C)
{
    int st = 0, end = arr[N - 1] - arr[0];
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        int lastCowPosition = arr[0];
        int countCows = 1;

        for (int i = 1; i < N; i++)
        {
            if (arr[i] - lastCowPosition >= mid)
            {
                countCows++;
                lastCowPosition = arr[i];
            }
        }

        if (countCows >= C)
        {
            ans = mid; // Found a valid distance
            st = mid + 1; // Try for a larger distance
        }
        else
        {
            end = mid - 1; // Try for a smaller distance
        }
    }
    return ans;
}

int main(){
    int N=5, C=3;
    vector<int> arr = {1, 2, 4, 8, 9}; // Example positions of cows
    cout<<getDistance(arr, N, C);
}