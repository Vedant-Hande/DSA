#include <iostream>
using namespace std;

int main()
{
    int n = 3; // Size of the triangle pattern
    char ch = 'a';

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j >= 1; j--)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}