#include<iostream>
using namespace std;

int main()
{
    int size  = 5;
    int marks[size] = {23, 45, 56, 89, 90};
    int i ;
    for( i = 0; i < size; i++){
        cin >> marks[i];
    }

    // int sz = sizeof(marks);
    // cout<<"Size of marks is "<<sz<<endl;
    // cout << sizeof(marks)/sizeof(int)<<endl;

    // loops: 0 to size-1
    for(int i =0 ; i<size; i++){
        cout<<"The value of marks "<<i<<" is "<< marks[i]<<endl;
    }




    return 0;   
}