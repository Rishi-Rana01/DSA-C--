#include <iostream>
#include <vector>
using namespace std;

int main(){
    int height[9]= {1,8,6,2,5,4,8,3,7};
    int n=9;

    int maxWater=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int w = j-i; // width
            int ht = min(height[i],height[j]);
            int currWater = w*ht;
            maxWater= max(maxWater,currWater);
        }
    }
    cout << maxWater;
}