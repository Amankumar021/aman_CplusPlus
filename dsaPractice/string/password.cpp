#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s, t;

    getline(cin , s);
    getline(cin , t);
    int n = s.length();
    int k ;
    cin >> k;


    for(int i =0; i<k; i++){
        int o;
        cin >> o;
        o = o%n;

        if(o>0){
            s = s.substr(o)+s.substr(0,o);
        }else{
            o = abs(o);
            s = s.substr(n-o)+s.substr(o, o-n);
        }

    }

    if(s==t){
        cout << "password Accepted";
    }else{
        cout<< "Try again";
    }


    return 0;
}