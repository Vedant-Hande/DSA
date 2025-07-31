// smallest & largest

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {12, 4, -5, 15, 55, 1, 13, 20};
    int size = 7;
    int smallest = 0, largest = 0;
    for (int i = 0; i <= size; i++)
    {
        smallest = min(smallest, nums[i]);
        largest = max(largest, nums[i]);
        // if (nums[i] < smallest)
        // {
        //     smallest = nums[i];
        // }
    }
    cout << "Smallest: " << smallest << endl;
    cout << "larest : " << largest << endl;
    return 0;
}
