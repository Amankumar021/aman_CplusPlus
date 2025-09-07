#include<iostream>

using namespace std;

int main()
{
    int num[] ={2,4,6,-15,10}; 
    int size = 5;

    //input array

    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    

    int smallest = INT16_MAX; // assign maximum value
    int bada = INT16_MIN; //assign minimum value
    
    //for loop
    for(int i =0 ;i<size ;i++)
    {
        
        // if(num[i]<smallest)
        // {
        //     smallest = num[i];
        // }

        smallest = min(num[i], smallest);// liberary function

        bada = max(num[i], bada); // liberary function

        
}

    //output 

    cout<<"The smallest number is "<<smallest<<endl;

    cout<<"The largest number is "<<bada<<endl;

    return 0;
}