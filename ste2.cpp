class Solution {
public:
    int minimumDeletions(string s) {
        int removed_element =0;
    
        vector<int> a;
        vector<int> b;
        // int j =0, k=0;
        for(int i =0 ; i<s.length(); i++)
        {
            if(s[i]=='b')
            {  
                b.push_back(i);
            }else {
                a.push_back(i);
            }

        }
        for(int i = 0; i< b.size(); i++){
            for(int j =0; j<a.size();j++){
                if(b[i]<a[j]){
                    removed_element++;
                    break;
                }
            }
        }
        return removed_element;
    }
};