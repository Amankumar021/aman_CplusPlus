#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>ans;

    int n ;
    cin >>n;

    for(int i=0; i<n; i++){
        int val;
        cin >> val;

        ans.push_back(val);
    }
    int count=0;
    for(int i=0; i< n; i++){
        for(int j=0; j<n; j++){
            if(ans[i]==ans[j]){
                count++;
            }
        }
        max(count,INT_MIN);
    }


    return 0;
}