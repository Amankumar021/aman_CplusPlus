#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;
int main(){
    vector<int> ans;
    vector<int> ans2;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        ans.push_back(val);
    }

    sort(ans.begin(), ans.end());
    int l=0, r= n-1;
    int count=0;
    while(l<=r){
        if(count%2==0){
            ans2.push_back(ans[l]);
            l++;
            count++;
        }else{
            ans2.push_back(ans[r]);
            r--;
            count++;
        }
    }

    for(int &val:ans2){
        cout<< val << " ";
    }
    
    return 0;
}