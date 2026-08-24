#include<iostream>
#include<list>
#include<vector>
#include<deque>


using namespace std;

int main(){
    deque<int> l ={1,2,3,4,5};

    for(int val : l){
        cout << val << " ";
    }
    cout <<endl;


    return 0;
    
    
}
