#include<iostream>
#include<cmath>


using namespace std;

int main(){
    float a,b,c,formula;
    cout << "Enter the value of a :" ;
    cin >> a ;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "Enter the value of c:";
    cin >> c;

    formula = 1/pow(a,2)+2/pow(b,2)+3/pow(c,2);

    // formula = int (formula);

    cout << "The desired result is " << formula << endl;

    return 0;
}