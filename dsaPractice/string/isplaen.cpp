#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    int n = s1.size();

    int l = n/2;

    string left;
    string right;

    left = s1.substr(0, l);
    right = s1.substr(l);

    

    reverse(left.begin(), left.end());
    reverse(right.begin(), right.end());

    
    string T = left+right;
    string t = T;


    reverse(T.begin(), T.end());

    if(t == T){
        cout << "true";
    }else{
        cout << "false";
    }

    cout << endl;

    cout << T;

    return 0;
}