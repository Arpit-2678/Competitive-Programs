// LINK= https://leetcode.com/problems/longest-common-prefix/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        unordered_set<char>ust;
        string res="";
        int len=strs.size();
        int k=0;
        while(true)
        {
             
            for(int i=0;i<strs.size();i++)
            {
                if(k<strs.at(i).length())
                ust.insert(strs.at(i).at(k));
                else
                    return res;
            }
            if(ust.size()==1)
                res.push_back(*ust.begin());
            else 
                return res;
            k++;
            ust.clear();
        }
        return res;
        
    }
};
