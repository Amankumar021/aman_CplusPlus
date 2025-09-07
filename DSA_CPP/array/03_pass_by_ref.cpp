#include<iostream>

using namespace std;

void change_array(int arr[], int n)
{
    cout << "array in fxn\n";
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2*arr[i];
    }
    
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;

    change_array(arr, n);

    cout << "array in main\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}