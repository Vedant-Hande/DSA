#include <iostream>
using namespace std;

int main()
{
    int n = 5; // Size of the triangle pattern
    char ch = 'A';

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}