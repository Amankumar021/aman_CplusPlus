#include<iostream>

using namespace std;

int main(){
    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;  // conversion of value fron big size rto low size space
    int teaQuantity = 2;
    double totalPrice = teaPrice * teaQuantity;  // double for high precision

    cout << totalPrice << endl;

    return 0;
}

