#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> ans2;
    int n;
    cin>> n;
    for(int i =0; i<n; i++){
        int x;
        cin >> x;
        ans2.push_back(x);
    }

    for(int i=0; i<n; i++){
        int f =0;
        for(int j =i+1; j<n; j++){
            if(ans2[j]>ans2[i]){
            f = ans2[j];
            break;
            }
        }
        cout << f << " ";
    }

    
    return 0;
} 
