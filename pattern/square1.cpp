#include <iostream>
using namespace std;

int main(){
    int n =4;
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    } 
}
// This program prints a 4x4 square pattern of numbers from 1 to 4.