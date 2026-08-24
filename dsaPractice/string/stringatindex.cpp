#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string haystack, needle;
    getline(cin, haystack);
    getline(cin, needle);

    for(int i =0; i<haystack.size(); i++){
        if(haystack.substr(i,needle.size())==needle){
            cout << i;
            break;
        }
    }
    return -1;
} 