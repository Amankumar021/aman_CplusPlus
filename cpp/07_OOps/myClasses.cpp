#include<iostream>
#include<vector>

using  namespace std;

class Chai {
        public: // declare public state (Universal access)
        // data members(attributes)

        string teaName; // name of the tea 
        int servings;   // number of servings
        vector<string> ingredients; // list of ingredients for the tea

        // member function

        void displayChaiDetails(){
            cout << "Tea Name :"<< teaName<< endl;
            cout << "Servings:"<< servings<< endl;
            cout << "Ingredients: ";
            for(string ingredient: ingredients){
                cout << ingredient <<" ";
            }
            cout << endl;
        }
        private: // declare private state variables(access modifer)
        string name;
};

int main(){
    Chai chaiOne ; 

    chaiOne.teaName ="lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water", "lemon", "Honey", "tea"};

    chaiOne.displayChaiDetails();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala Chai";
    chaiTwo.servings = 5;
    chaiTwo.ingredients = { "Milk", "Ginger", "tea", "Masala"};

    chaiTwo.displayChaiDetails();

    return 0;
} 