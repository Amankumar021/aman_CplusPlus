#include<iostream>

using namespace std;

int main (){

    int  teaCups, totalPrice, teaPrice, discountPrice;
    // string = "student";
    bool isStudent ;
    cout << "Are you Student (1 for yes and 0 for No)" << endl;
    cin >> isStudent;

    cout << "Enter the cost of tea ?" << endl;
    cin >> teaPrice;
    cout << "Enter the number tea cups you have ?" << endl;
    cin >> teaCups;

    totalPrice = (teaPrice * teaCups);
    discountPrice = totalPrice - (totalPrice*0.15);

    if (  isStudent = true || teaCups > 15 )
    {
        cout << "You are elegible for discount of 15%."  << endl ;
        cout << "Your payable amount is :" << discountPrice << endl;
    }else {
        cout << "Your payble amount is " << totalPrice << endl;
    } 

    cout << "Thanks You For Visiting !" << endl;
    return 0;
}