#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> ques;
    int n ;
    cin>> n;

    for(int i =0; i<n; i++){
        int val;
        cin>> val;
        ques.push_back(val);
    }

    int k =0;
    for(int i =0; i<n ; i++){
        if(ques[i]!=0){
            ques[k] = ques[i];
            k++;
        }
    }

    while(k!=n){
        ques[k]=0;
        k++;
    }
    
    for(int &val: ques){
        cout << val << " ";
    }

    
    return 0;
}