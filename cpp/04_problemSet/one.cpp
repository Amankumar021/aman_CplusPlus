#include<iostream>
// using street machine to pick items
using namespace std;

int main(){
    int choice;

    double price;

    cout << "1. Coke\n";
    cout << "2. Curd\n";
    cout << "3. Milk\n";
    cout << "4. Orange juice\n";
    cout << "5. Fanta\n";
    cout << "6. Sprite\n";
    cout << "7. Thumbs up\n";
    cout << "8. water bottle\n";
    cout << "9. king Fisher\n";
    cout << "10. Soda\n";

    cin >> choice;
    switch(choice){
        case 1:
            price = 20;
            cout << "You selected coke. Pay price : " << price << endl;
        break;
        case 2:
            price = 10;
            cout << "You selected curd. Pay price : " << price << endl;
        break;
        case 3:
            price = 20;
            cout << "You selected milk. Pay price : " << price << endl;
        break;
        case 4:
            price = 125;
            cout << "You selected coke. Pay price : " << price << endl;
        break;
        case 5:
            price = 30;
            cout << "You selected Fanta. Pay price : " << price << endl;
        break;
        case 6:
            price = 50;
            cout << "You selected sprite. Pay price : " << price << endl;
        break;
        case 7:
            price = 20;
            cout << "You selected Thumbs Up. Pay price : " << price << endl;
        break;
        case 8:
            price = 20;
            cout << "You selected Water bottle . Pay price : " << price << endl;
        break;
        case 9:
            price = 120;
            cout << "You selected King fisher. Pay price : " << price << endl;
        break;
        case 10:
            price = 60;
            cout << "You selected Soda. Pay price : " << price << endl;
        break;

    default :
        cout << "Invalid choice!"<< endl;
    }
    return 0;
}