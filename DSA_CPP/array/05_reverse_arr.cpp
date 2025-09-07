#include<iostream>

using namespace std;

int swap(int arr[],int start,int end){
    while(start<end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    swap(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}