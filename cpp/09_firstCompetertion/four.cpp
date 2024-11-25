#include<iostream>
#include<algorithm>

using namespace std;
// print second greatest number 
int main(){
    int N;
    cin >> N ;

    while (N--){
        int a,b,c;
        cin >> a >> b >> c;

        int arr[] = {a,b,c};

        sort (arr, arr+3 );

        cout << arr[1] << endl; 
    }
    return 0;
}