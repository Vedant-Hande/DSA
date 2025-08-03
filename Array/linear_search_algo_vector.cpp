#include <iostream>
#include <vector>
using namespace std;

int searchNumber(vector<int> &nums, int target)
{
    for (int val : nums)
    {
        if (val == target)
        {
            return val;
        }
    }
    return -1;
}

int main()
{
    int target = 2;
    vector<int> nums = {4, 1, 2, 1, 2};
    
    cout << "target :" << searchNumber(nums, target);
}