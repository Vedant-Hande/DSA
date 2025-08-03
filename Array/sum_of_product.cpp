#include <iostream>
#include <vector>
using namespace std;

int sumOfNumbers(vector<int> &vec)
{
    int sum = 0;

    for (int val : vec)
    {
        sum = sum + val;
    }
    return sum;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    cout << "sum of numbers is : " << sumOfNumbers(nums);
}
