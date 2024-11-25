#include<iostream>

using namespace std;

int main(){
    int cups ;

    cout << "Enter the cups ordered ?";
    cin >> cups;
    while (cups > 0)
    {
        cups--;
        cout << "Serving a cups of tea \n" << cups << "  remaining" << endl;
    }
    cout << "All tea cups are served." ;
}