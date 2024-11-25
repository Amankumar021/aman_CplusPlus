#include<iostream>

using namespace std;

int globalChaistock = 100;

void pourChai(int &cups){ // call by reference
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl; // 7
}

int main (){

    int cups = 2;
    pourChai(cups); 

    cout << "total cups are :" << cups << endl ; // 7
    return 0;
}