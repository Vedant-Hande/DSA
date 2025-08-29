#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;

    int **ptr2 = &ptr;

    cout << "a : " << a << endl;
    cout << "addres of a :" << &a << endl;
    cout << "ptr :" << ptr << endl;
    cout << "address of prt :" << &ptr << endl;
    cout << "value at address ptr :" << *ptr << endl;
    cout << "ptr2 :" << ptr2 << endl;
    cout << "address of ptr2 :" << &ptr2 << endl;
    cout << "value at address ptr2 :" << *ptr2 << endl;

    return 0;
}