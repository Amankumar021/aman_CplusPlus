#include<iostream>

using namespace std;

int main()
{

    int size=5;
    int arr[size];

    //input array
    for(int i=0 ;i<size;i++)
    {
        cin>> arr[i];
    }

    // min value
    int lowest = INT16_MAX;
    int lowPOS = -1;

    for(int i=0 ;i<size;i++)
    {
        lowest = min(arr[i], lowest);
        if(arr[i] == lowest)
        {
            lowPOS = i+1;
        }
    }

    //max value 

    int largest = INT16_MIN;
    int largePOS = -1;

    for (int i=0 ;i<size;i++)
    {
        largest = max(arr[i], largest);
        if(arr[i] == largest)
        {
            largePOS = i+1;
        }
    }


    cout << "The smallest number is " << lowest << " at position " << lowPOS << endl;
    cout << "The largest number is " << largest << " at position " << largePOS << endl;

    return -100;
}