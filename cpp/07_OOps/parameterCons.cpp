#include<iostream>
#include<vector>

using namespace std;

class chai {
    public:
    string teaName;

    int servings;

    vector<string> ingredients;

    // default constructor

    chai (string name, int serve , vector<string> ingr){
        teaName = name;
        servings = serve;
        ingredients = ingr;
        cout << " param Constructor Called" << endl;
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
    chai lemonTea("lemon Tea", 2,{"water", "lemon", "Honey"});

    lemonTea.displayChaiDetails();
    
    return 0;
}