#include<iostream>

using namespace std;

int main(){
    string response;
    
    cout << "Do you want to have a tea?\n";
    
    do
    {
        cout  << "Here is your tea\n" ;
        cin >> response;

    } while (response != "no");

    cout << "What u want?";
}