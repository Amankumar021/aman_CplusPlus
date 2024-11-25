#include<iostream>

using namespace std;
// nested loop
int main (){
    string teaTypes[5] ={"Oolang Tea","Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"}; 

    for (int i = 0; i < 5; i++) // loop
    {   
        cout << "Brewing " << teaTypes[i] << "..."<< endl;

        for (int j = 1; j <= 3; j++)
        {
            cout << "Brewing " << j << " cup of " << teaTypes[i] << endl;
        }
    }
    return 0;
}