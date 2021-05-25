// LINK=https://leetcode.com/problems/repeated-substring-pattern/

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
           
         string str=s+s;
          str=str.substr(1,str.size()-2);
        if(str.find(s)==string::npos)
            return false;
        else
            return true;
        
    }
};
