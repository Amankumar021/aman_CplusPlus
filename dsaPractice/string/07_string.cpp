#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int main(){
    string str ;
    getline(cin, str);
    int k;
    cin>>k;
    int count=0;
    // string st;
    for(int i =0; i<=str.length();i+=2*k){
        if(count%k==0){
            string st = str.substr(i, i+k);
            reverse(st.begin(), st.end());
            cout << st;
            count++;
        }else{
            cout << str.substr(i,i+k);
            count++;
        }
    }

    return 0;
}