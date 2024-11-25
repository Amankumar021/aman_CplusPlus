#include<iostream>
#include<vector>

using namespace std;

class chai {
    public:
    string teaName;

    int servings;

    vector<string> ingredients;

    // default constructor

    chai (){
        teaName ="Unknown Tea";
        servings = 1;
        ingredients = {"water,", "Tea leaves,", "Ginger" };
        cout << "Constructor Called" << endl;
    }


    void displayChaiDetails(){
        cout << "Tea Name : "<< teaName << endl;  
        cout << "Serving : "<< servings << endl;
        cout << "Ingredients: ";
        for(string ingredient :ingredients){
            cout << ingredient << " ";
        }  
        cout << endl;
    }
};

int main(){
    chai defaultChai;

    defaultChai.displayChaiDetails();
    return 0;
}