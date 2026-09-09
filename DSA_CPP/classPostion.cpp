#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int>ans;
    int n;
    cin>>n;

    for(int i =0; i<n;i++){
        int marks;
        cin>>marks;
        ans.push_back(marks);
    }
    vector<int> ans2(ans.begin(), ans.end());

    sort(ans2.begin(), ans2.end());

    for(int k=0; k<n; k++){
        int l=0, r=n-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(ans2[mid]==ans[k]){
                ans[k] = n-mid;
                break;
            }else if(ans2[mid]>ans[k]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
    }

    for(int i =0; i<n; i++){
        cout << ans[i] << " ";
    }

    return 0;
    
}