#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int> &arr)
{
    int result = INT_MIN;
    for (int st = 0; st <= arr.size(); st++)
    {
        int sum = 0;
        for (int end = st; end < arr.size(); end++)
        {
            sum = sum + arr[end];
            result = max(sum, result);
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};

    cout << "max sum is :" << maxSubArray(arr);
}