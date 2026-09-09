#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> ans;

    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        int val;
        cin>>val;
        ans.push_back(val);
    }
    vector<int> ans2(ans.begin(), ans.end());

    sort(ans2.begin(), ans2.end());
    int count =0;

    for(int i=0; i< n; i++){
        if(ans[i]!=ans2[i]){
            count++;
        }
    }
    cout<< count;

    return 0;
}