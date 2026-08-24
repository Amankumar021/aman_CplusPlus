#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int t;
    string str;
    string s;
    
    getline(cin,str);

    cout << "enter s2 ";
    getline(cin,s);

    cout << "enter interval ";
    cin >> t;

    int i =0;

    while(i<str.length()){
        if(i%t==0){
            cout <<str[i]+ s;
        }else{
            cout << str[i];
        }
        i++;
    }
}