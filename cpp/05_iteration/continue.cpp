#include<iostream>

using namespace std;

int main(){
    string teaTypes[5] ={"Oolang Tea","Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"};   // declaring list

    for (int i = 0; i < 6; i++)
    {
        if (teaTypes[i]=="Green Tea"){
            cout << "Skipping the " << teaTypes[i] << endl;
            continue;
        }
        cout << "Brewing " << teaTypes[i] << "..." << endl;
    }
    return 0;
}