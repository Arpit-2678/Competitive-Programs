// LINK=https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters/submissions/


class Solution {
public:
    string modifyString(string s) {
         int lim = 26;
        int len = s.length();
        set<int> st;
        for(int i = 0; i <len;i++) {
            if(s[i] == '?') {
                st.insert(i);
                s[i] = 'a';
            }
        }
        
        for(auto it : st) {
            
            char cp = it>0?s[it-1]:'Z';
            char cc = s[it];
            char cn = it<len-1?s[it+1]:'Z';
            auto i = max(cp, cn) + 1;
            while(cc == cp || cc == cn) {
                cc = 'a' + (i++ % lim);
            }
            s[it] = cc;
        }
        return s;
    }
};


 
