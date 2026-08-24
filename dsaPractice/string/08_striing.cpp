#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str1;
    getline(str1);
    string str2;
    getline(str2);
    int n ;
    cin >> n;
    string s3 = str1.substr(n) + str1.substr(0,n);
    // string s4 = str2.substr()
    cout << s3;
}