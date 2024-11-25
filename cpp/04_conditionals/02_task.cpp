#include<iostream>


using namespace std;

int main(){
    int hour;

    cout << "Enter the current hour (0-23)\n";
    cin >> hour;

    if (hour >= 0 && hour <= 18)
    {
        cout << "Tea shop is OPEN!"<< endl;
    }else{
        cout << "Tea shop is Closed!"<< endl;
    }
    

    return 0;
}