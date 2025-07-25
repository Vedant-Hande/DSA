#include <iostream>
using namespace std;

int main()
{
    int n = 6; // Size of the triangle pattern

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}