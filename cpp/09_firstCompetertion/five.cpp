#include<iostream>
#include<cmath>

using namespace std;

int sum_of_digit(int N){
    int digit_sum =  0;

    N = abs(N); // handle neg value by taking absolute value

    while(N>0){
        digit_sum += N%10; // add the last digit to the sum
        N = N/10;  // remove last digit 
    }

    return digit_sum;
}


int main (){
    

    return 0;
}