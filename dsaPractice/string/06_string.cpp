#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    string s;
    getline(cin,s);
    string s1 ;
    string s2 ;

    int n = s.length();
    int m ;
    cin>> m;

    // left rotation
    // s1 = s.substr(0,m%n);
    // s2 = s.substr(m%n);
    // cout<<  s2 + s1 << endl;

    // right rotation

    s1 = s.substr(n-m);
    s2 = s.substr(0,n-m);
    cout<<  s1 + s2 << endl;


    return 0;
}