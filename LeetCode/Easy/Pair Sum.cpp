#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> pairSum(vector<int> &nums, int target) // O(n)
{
    vector<int> result;
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        int pairSum = nums[left] + nums[right];
        if (pairSum > target)
        {
            right--;
        }
        else if (pairSum < target)
        {
            left++;
        }
        else
        {
            result.push_back(nums[left]);
            result.push_back(nums[right]);
            return result;
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    vector<int> ans = pairSum(nums, target);

    cout << "pairSum :" << ans[0] << " " << ans[1];
    return 0;
}