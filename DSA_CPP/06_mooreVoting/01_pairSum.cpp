#include<iostream>
#include<vector>

using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{

    vector<int> ans;
    int n = nums.size();

    for(int i=0; i<n ; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(nums[i]+nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        } 
    } // O(n^2)
    return ans;
}




int main()
{
    vector<int> nums = {2,7,11,15};
    int target =13;

    vector<int> ans = pairSum(nums, target);

    cout << ans[0] <<","<< ans[1]<< endl;

    return 0;
}


// # same thing with array approch
// int main()
// {
//     vector<int> arr[4]={2,7,11,15};

//     int target =9;

//     for(int i=0;i<4;i++)
//     {
//         for (int st = i+1; st < 4; st++)
//         {
//             cout << "(" << arr[i]<< "," << arr[st] <<")"  ;
//         }
        
//         cout << endl;
//     }

//     // printing only targeted array i.e target =9(sum of pair or array)
//     for (int i = 0; i < 4; i++)
//     {
//         for(int j =i+1; j<4 ; j++)
//         {
//             if((arr[i]+arr[j])==target)
//             {
                
//             }
//         }
//     }
    
//     return 0;
// }