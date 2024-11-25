#include<iostream>

using namespace std;

int* prepareChaiOrders(int cups){
    int* orders = new int [cups];  // using new create a dynamic memory that stores fuction parmanently
    for(int i =0; i <cups; i++){
        orders[i] = (i + 1)*10;   // construncting an array
    }
    return orders;
} 

int main(){
    int cups = 5;
    int* chaiOrder = prepareChaiOrders(cups);     

    for(int i = 0; i< cups ; i++ ){
        cout << "Cups " << i+1 << ": has " << chaiOrder[i] << " ml\n";
    }

    delete[] chaiOrder;  // deletes the function from being permanent 

    return 0;
}