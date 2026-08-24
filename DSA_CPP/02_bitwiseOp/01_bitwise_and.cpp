#include<iostream>

using namespace std;

int main()
{
    int a=4,b=8;
    // bitwise AND operator
    cout << "Bitwise AND operator :" << (a & b) << endl; // 0

    // bitwise OR operator

    cout << "Bitwise OR operator :" << (a | b) << endl; // 12

    // bitwise XOR operator
    cout << "Bitwise XOR operator :" << (a ^ b) << endl;
     // 12

    // bitwise leftshft operator
    
    cout << "Bitwise leftshift operator :" << (a << 1) << endl; // 8

    // bitwise rightshft operator
    cout << "Bitwise rightshift operator :" << (a >> 1) << endl; // 2
    
    return 0;
}

