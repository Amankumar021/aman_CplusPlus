#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>

using namespace std;



int main()
{
    vector<int> ans;
    vector<int> ans2;

    int n;
    cin>>n;
    int sum=0;

    for(int i =0; i<n; i++){
        int marks;
        cin>> marks;
        ans.push_back(marks);
        if(i<=5){
            sum+=marks;
        }

    }

    
    
    sort(ans.rbegin(), ans.rend());
    
    
    cout << sum << endl;;

    for(int j = n-5; j<n; j++){
        cout<< ans[j] << " ";
    }

    return 0;

}
