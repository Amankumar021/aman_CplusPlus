#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // vector<int> vec = {1,2,3}; //0


    //2nd way

    // vector<int> vec(3,0);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    
    
    // char in vector 
    
    vector<char> vec1={'a','e', 'i', 'o', 'u'};
    
    for(char val : vec1)
    {
        cout << val << endl;
    }


    
    return 0;
}
