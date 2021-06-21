// LINK=https://leetcode.com/problems/word-pattern/


class Solution {
public:
    bool wordPattern(string pat, string s) {
        if(pat.size()==1)
            return true;
        if(pat==s)
            return false;
        unordered_map<string,char>ump;
        unordered_set<char>ust;
        int ind=0;
        s.push_back(' ');
        string str;
        for(auto it:s)
        {
            if(it==' ')
            {
                if(ump.find(str)==ump.end())
                {
                    if(ust.find(pat[ind])!=ust.end())
                    {
                        return false;
                    }
                    else
                    ump[str]=pat[ind];
                }
                else
                {
                    if(ump[str]!=pat[ind])
                    {
                        return false;
                    }
                }
                ust.insert(pat[ind]);
                ind++;
                str.clear();
            }
            else
                str.push_back(it);
        }
        if(ind<pat.size())
            return false;
       
        
        return true;
        
    }
};
