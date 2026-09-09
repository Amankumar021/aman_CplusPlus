#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main(){
    string s1;
    string s2;

    getline(cin , s1);

    for(int i =0 ;i<s1.length(); i++){
        char c = s1[i];
        if(isalpha(c)){
            s2+=s1[i];
        }
    }

    reverse(s2.begin(), s2.end());

    for(int i =0; i<s1.length(); i++){
        char c = s1[i]; 
        if(!isalpha(c)){
            s2.insert(i,1,c); 
        }
    }

    cout << s2;

    return 0;
}
