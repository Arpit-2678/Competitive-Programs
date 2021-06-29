// LINK=https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/606/week-4-june-22nd-june-28th/3794/


class Solution {
public:
    string removeDuplicates(string str) {
        stack<char>st;
        st.push(str.at(0));
           for(int i=1;i<str.size();i++)
           {
               if(!st.empty() and st.top()==str.at(i))
               {
               while(!st.empty() and st.top()==str.at(i))
               {
                   st.pop();
               }
               }
               else
                   st.push(str.at(i));
           }
        string res="";
          while(!st.empty())
          {
              res.push_back(st.top());
              st.pop();
          }
        reverse(res.begin(),res.end());
        return res;
    
    }
};
