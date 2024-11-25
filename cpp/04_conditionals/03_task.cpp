#include<iostream>

using namespace std;

int main (){
    int cups;
    double pricePerCup = 5, totalPrice, discount;

    cout << "Enter the number of cups ordered ? ";
    cin >> cups;

    if (cups >= 20)      
    {
        discount = 0.20;
    }if(cups >= 10 && cups < 20 ){
        discount = 0.10;
    }else{
        discount = 0;
    }

    // totalPrice = (pricePerCup*cups - (pricePerCup * discount));

    totalPrice -=(totalPrice*discount);
    int count ;
    
    // count = 5;
    // count = count +1;
    // count +=1;

    cout << "you got the " << discount*100 << " percent discount on your order" << endl;
    cout << "The payable amount is " << totalPrice << endl;


    return 0;
}