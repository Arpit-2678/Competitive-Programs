// LINK=https://leetcode.com/problems/group-anagrams/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        
    vector<vector<string>> vec;
    vector<string>res;
    multimap<string,int> ummp;
    string temp="";
    for(int i=0;i<str.size();i++)
    {
        temp=str[i];
        sort(temp.begin(),temp.end());
        ummp.insert({temp,i});
    }
        ummp.insert({"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",0});
        auto it=ummp.begin();
    it++;
    auto ip=ummp.begin();
    for(;(ip!=ummp.end() and it!=ummp.end());ip++,it++)
    {
       if(ip->first==it->first)
       {
           res.push_back(str[ip->second]);
           //it++;
       }
       else
       {
           res.push_back(str[ip->second]);
           vec.push_back(res);
           res.clear();
       }
    }
        return vec;
     
    }
};
