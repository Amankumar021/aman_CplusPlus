#include<iostream>

using namespace std;

void pourChai(int superman){  // call by value
    superman = superman + 5;
    cout << "Poured cups: " << superman << endl;
}

int main (){

    int cups = 2;
    pourChai(cups);

    cout << "total cups are :" << cups << endl ;
    return 0;
}