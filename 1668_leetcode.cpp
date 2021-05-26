// LINK=https://leetcode.com/problems/maximum-repeating-substring/


class Solution {
public:
  int maxRepeating(string s, string w) {
              string res=w;
        int cnt=0;
               while(w.size()<=s.size())
               {
                     if(s.find(w)!=string::npos)
                     {
                         w.append(res);
                         cnt++;
                     }
                   else
                       break;
               }
        return cnt;
           
        
    }
};
