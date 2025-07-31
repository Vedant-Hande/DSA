#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int traget)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == traget)
        {
            return i; // Return the index of the target element if found
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main()
{
    int nums[] = {12, 4, -5, 15, 55, 1, 13, 20};
    int size = 7;
    int target = 15;

    cout << "Array: " << linearSearch(nums, size, target) << endl;
}