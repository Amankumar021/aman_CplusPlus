#include<iostream>

using namespace std;

int main(){
    int chaiSales [3][7]={
        {50,55,60,88,66,99,25},
        {12,25,36,45,66,98,25},
        {84,48,15,81,87,88,55},
    };

    for(int i =0; i<3;i++){   // iteration(loop)
        cout << "I am at the shop: "<< i+1 << "\n";
        for(int j=0; j<7;j++){
            cout << chaiSales[i][j] << " cups\n";
        }
    }


    return 0;
}