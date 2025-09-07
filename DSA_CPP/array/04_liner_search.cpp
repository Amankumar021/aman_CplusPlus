#include<iostream>

using namespace std;

int linerSearch(int arr[], int sz, int target)
{
    for (int  i = 0; i < sz; i++)
    {
        if(arr[i]==target){
            return  i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int sz = 5;
    int target;
    cin >> target;

    cout << linerSearch(arr, sz, target)<< endl;
    return 0;
}