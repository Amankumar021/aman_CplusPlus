#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    string s = "a mskuma";
    int word=0;
    vector<int> ans;
    int n = s.length();
    ans.push_back(n);
    int k = n;

    while(n--){
        int m=0;
        if(s[n]==' '){
            // m = n;
            if(k!=n){
                word = k-n-1;
                cout << word;
                break;
            }
        }
        
    }


    return 0;
}