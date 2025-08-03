#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = nums.size();
    cout << "reversing the vector elements: \n";
    reverseVector(nums);

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
}
