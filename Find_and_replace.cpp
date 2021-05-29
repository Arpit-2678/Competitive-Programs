// LINK=https://leetcode.com/problems/find-and-replace-pattern/



class Solution {
public:
      string convert(string str)
      {
          unordered_map<char,int>umap;
          string res="";
          int i=0;
          for(auto it:str)
          {
              if(umap.find(it)==umap.end())
              {
                  umap[it]=i++;
              }
              res+=to_string(umap[it]);
          }
          return res;
      }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        int len=pattern.length();
        string s1=convert(pattern);
          for(auto it:words)
          {
              if(it.length()==len and convert(it)==s1)
                  ans.push_back(it);
          }
        return ans;
        
    }
};
