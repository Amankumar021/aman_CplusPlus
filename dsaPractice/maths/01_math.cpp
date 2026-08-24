#include<iostream>
#include<math.h>
using namespace std;


    int checkDivisibility(int &n,int check) {
        int sum =0;
        int prd =1;
        while(n>=1){
            int rem = n%10;
            sum+=rem;
            prd*=rem;
            n/=10;
        }
        check = sum + prd;

        cout << check;
    };

    int main(){
        int n ;
        cin>>n;
        int check = 0;
        checkDivisibility(n, check);

        return 0;
    }