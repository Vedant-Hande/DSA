#include <iostream>
using namespace std;

int main()
{
    int n = 3; // Size of the triangle pattern
    int num = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j >= 1; j--)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}