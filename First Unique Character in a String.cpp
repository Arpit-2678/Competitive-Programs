// LINK=https://leetcode.com/problems/first-unique-character-in-a-string/



class Solution {
public:
    int firstUniqChar(string s) {
         ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
         int ch[26]{0};
        int len=s.size();
        for(int i=0;i<len;i++)
        {
           ch[s[i]-'a']++; 
        }

        for(int i=0;i<len;i++)
        {
            if(ch[s[i]-'a']==1)
                return i;
        }
        return -1;
        
    }
};
