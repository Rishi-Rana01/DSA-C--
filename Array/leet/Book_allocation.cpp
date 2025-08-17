#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
    int student = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }

        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            student++;
            pages = arr[i];
        }
    }
    return student > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m) // time complexity  o(logN*n)
{

    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    int maxPagesInBook = 0; // Initialize maxPagesInBook to find the maximum in the array
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] > maxPagesInBook)
        { // Keep track of the maximum page count in a single book
            maxPagesInBook = arr[i];
        }
    }
    int ans = -1;
    int st = maxPagesInBook, end = sum; // Set st to maxPagesInBook
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
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}