#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums =  {1,2,5,6,1};
    vector<int> cost =  {5,2,5,4,5};
    vector<int> ans;

    for(int i =0; i<nums.size();i++){
        int sum =0;
        for(int j=0; j<nums.size();j++){
            int diff = abs(nums[i]-nums[j]);
            sum+=(diff*(cost[j]));
        }
        ans.push_back(sum);
    }

    int min = *min_element(ans.begin(), ans.end());
    cout<< min << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout<< ans[i] << " ";
    }
    


    return 0;
}