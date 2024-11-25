#include<iostream>

using namespace std;

int main (){
    int cups;

    cout << "Enter the no of cups you had? ";
    cin >> cups ;

    if(cups > 20){
        cout << "YOu will get a GOLD badge" << endl;
    } else if (cups >= 10 && cups <= 20){

        cout << "YOu will get a SILVER badge" << endl;
    }else{
        cout << "No BADGE for you" << endl;
    } 

    return 0;
}