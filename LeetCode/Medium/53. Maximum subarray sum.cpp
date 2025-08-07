// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int currentSum = 0;
    int result = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        currentSum += nums[i];
        result = max(currentSum, result);

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums);
}