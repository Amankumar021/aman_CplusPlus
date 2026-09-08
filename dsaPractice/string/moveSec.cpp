#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s;
    getline(cin , s);

    string t;
    string m;
    int count =1;

    for(int i=0; i<s.size(); i++){
        if(count%4==0 || count%6==0){
            t+=s[i];
            count++;
        }else{ 
            m+=s[i];
            count++;
        }
    }

    cout << m+t;

    return 0;
}