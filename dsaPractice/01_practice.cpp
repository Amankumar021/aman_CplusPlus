#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    int count =0;
    while (t--)
    {
        int x;
        cin >>x;

        if (x%2==0)
        {
            count++;
        }else{
            count--;
        }
        
    }

    if(count>0){
        cout<<"Even";
    }else if(count<0){
        cout<<"Odd";
    }else{
        cout<<"Tie";
    }
    

    return 0;
}