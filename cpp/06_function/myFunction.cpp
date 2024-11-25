// returnType function(parameters){
//     function body
// }
// void
#include<iostream>
using namespace std;

int checkTemperature( int temperature){
    return temperature;
}

void serveChai(int cups );

void makeChai(){
    cout << "Boiling water , adding tea leaves, straining...";
}

void serveChai(string teaType = "Masala tea"){
    int cups = 4;
    cout << "Serving " << teaType << endl;
}

int main (){
    int temp = checkTemperature(50);
    // cout << temp;
    // makeChai();  // calling a function 
    // serveChai(3);
    serveChai();
    return 0;
}


// defination of function

void serveChai(int cups){
    cout << "Serving " << cups <<" of chai";
}
