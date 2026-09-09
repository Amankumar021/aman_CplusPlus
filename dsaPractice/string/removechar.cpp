#include<iostream>
#include<string>


using namespace std;

int main(){
    string s;
    string reS;
    string t;
    getline(cin, s);
    getline(cin, reS);

    // 1st method
    // for(int i =0;i<s.size(); i++){
    //     if(reS.find(s[i]) == string::npos){
    //         t+=s[i];
    //     }
    // }

    // 2nd approach 
    for(int i =0;i<s.length(); i++){
        char c = s[i];
        bool f = false;
        for(int j=0; j<reS.size(); j++){
            if(s[i]==reS[j]){
                f = true;
            }
        }

        if(!f){
            t+=c;
        }
    }

    cout<<t;

    return 0;
}