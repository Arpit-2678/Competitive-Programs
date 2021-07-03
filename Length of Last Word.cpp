// LINK=https://leetcode.com/problems/length-of-last-word/


class Solution {
public:
    int lengthOfLastWord(string s) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        while(!s.empty() and s.back()==' ')
            s.pop_back();
        
        if(s.size()==1 and s.at(0)==' ')
            return 0;
        int sp=0,flag=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)==' ')
            {flag++;
                sp=i;
            }
        }
        if(flag==0)
            return s.size();
        else
        {
            string x=s.substr(sp+1);
            return x.size();
        }
    }
};
