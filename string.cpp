#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s = "aabab";
    vector<int> a;
    vector<int> b;
    int j = 0, k = 0;
    int rem_element =0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a') {
            a.push_back(i);
            j++;
        } else {
            b.push_back(i);
            k++;
        }
    }

    cout << "Count of 'a': " << j << endl;
    cout << "Count of 'b': " << k << endl;

    // Optional: print positions
    cout << "Positions of 'a': ";
    for (int pos : a) cout << pos << " ";
    cout << endl;

    cout << "Positions of 'b': ";
    for (int pos : b) cout << pos << " ";

    cout << endl;
    int n = min(a.size(),b.size());
    for(int i = 0; i<n ;i++){
        if(b[i]<a[i]){
            rem_element+=1;
        }
    }
    cout << "removed element" << rem_element << endl;

    return 0;
}
