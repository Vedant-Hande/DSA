#include <iostream>
#include <vector>

using namespace std;

void changeA(int *ptr) // change the a value using pointers
{
    *ptr = 20;
}

void changeA(int &ref) // change the a value using reference variable (alias)
{
    ref = 30;
}

int main()
{
    int a = 10;
    cout << "Before : " << a << endl;
    changeA(&a);
    cout << "After pointers : " << a << endl;
    changeA(a);
    cout << "After reference variable : " << a << endl;

    return 0;
}