#include <iostream>
#include <string>

using namespace std;

int main (){
    string teaOrder;
    cout << "Enter your tea order " ;
    getline(cin, teaOrder);

    if (teaOrder == "greentea")  // for match use ==  ( === for assign value)
    {
        cout << "Thanks for the order \nYour order of Green Tea is confirmed .";
    }else{
        cout << "Order something";
    }
    
    return 0;
}
