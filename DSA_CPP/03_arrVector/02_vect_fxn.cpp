#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<char> vec={'a','e', 'i', 'o', 'u'};
    // size of vector
    cout << "Size of vector: " << vec.size() << endl;


    // adding element at last
    vec.push_back('m');
    cout << "After push back size of vector: " << vec.size() << endl;


    //removing last element
    vec.pop_back();
    cout << "After pop back size of vector: " << vec.size() << endl;

    cout << vec.front() << endl; // first element
    cout << vec.back() << endl;  // last element


    return 0;
}