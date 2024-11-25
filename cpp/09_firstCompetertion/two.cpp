#include<iostream>
#include<cmath>

using namespace std;
int main(){

    int m;
    cout << "Enter any natural no" << endl;

    cin >> m;

    if(m>1){

        cout << "The desired pythagorus triplet will be : " ;
        cout << 2*m << "," ;
        cout << (pow(m,2) - 1) <<",";
        cout << (pow(m,2) + 1) << "."<< endl;
    }else{
        cout << "Enter the no greater than 1"<< endl;
    }
    return 0;
}

