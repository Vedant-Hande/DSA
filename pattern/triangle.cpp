#include <iostream>
using namespace std;
int main()
{
    int n = 4; // Size of the square pattern
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}