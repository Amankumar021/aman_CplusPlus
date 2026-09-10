#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    
    string vowel = "aAeEiIoOuU";

    string s;
    getline(cin, s);

    string t="";
    for(int i=0; i<s.size(); i++){
        bool f = false;
        t+=s[i];

        if(s[i]==' '  || i==s.size()-1)
        {
            for(int i =0;i<t.size(); i++){
                if(vowel.find(t[i]) != string ::npos){
                    f = true;
                    t = "";
                    break;
                }
            }
            if(!f){
                cout << t;
            }            
        }
    }

    return -1;
}