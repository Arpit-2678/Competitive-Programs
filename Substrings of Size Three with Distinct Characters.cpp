// LINK=https://leetcode.com/contest/biweekly-contest-53/problems/substrings-of-size-three-with-distinct-characters/


class Solution {
public:
    int countGoodSubstrings(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int i=0,j=0,ans=0;
        unordered_map<char,int>ust;
        while(j<s.size())
        { 
             ust[s.at(j)]++;
            if(j-i+1==3)
            {
                if(ust.size()==3)
                    ans++;
                ust[s.at(i)]--;
                if(ust[s.at(i)]==0)
                    ust.erase(s.at(i));
                
               
                i++;
                j++;
                
            }
            else
            {
                j++;
            }
        }
        return ans;
        
        
    }
};
