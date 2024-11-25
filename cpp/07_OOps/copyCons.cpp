#include<iostream>
#include<vector>

using namespace std;

class Chai {
    public:
    string* teaName;

    int servings;

    vector<string> ingredients;

    // default constructor

    Chai (string name, int serve , vector<string> ingr){
        teaName = new string (name);
        servings = serve;
        ingredients = ingr;
        cout << " param Constructor Called" << endl;
    }

    ~Chai(){   // freeing the space(storage// deletion of data)
        delete teaName;
        cout << "destructor called" << endl;
    }


    Chai (const Chai& other){
        teaName = new string(*other.teaName);   // syntax for copied constructor
        servings = other.servings;
        ingredients = other.ingredients;

        cout << "copy Constructor is called" << endl;
    }


    void displayChaiDetails(){
        cout << "Tea Name : "<< *teaName << endl;  
        cout << "Serving : "<< servings << endl;
        cout << "Ingredients: ";
        for(string ingredient :ingredients){
            cout << ingredient << " ";
        }  
        cout << endl;
    }
};

int main(){
    Chai lemonTea("lemon Tea", 2,{"water", "lemon", "Honey"});

    lemonTea.displayChaiDetails();

    // copy the object

    Chai copiedChai = lemonTea;
    copiedChai.displayChaiDetails();

    *lemonTea.teaName = "Modified Lemon Tea";  // without pointer will show an error

    cout << "Lemon Tea" << endl;
    lemonTea.displayChaiDetails();
    cout << "copied Tea" << endl;
    copiedChai.displayChaiDetails();


    return 0;
}