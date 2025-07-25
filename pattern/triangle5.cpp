#include <iostream>
using namespace std;

int main()
{
    int n = 26; // Size of the triangle pattern

    for (int i = 0; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}