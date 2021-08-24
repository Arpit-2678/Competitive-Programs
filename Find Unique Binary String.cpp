// LINK=https://leetcode.com/contest/weekly-contest-255/problems/find-unique-binary-string/

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string pre="";
        for(int i=0;i<nums[0].length();i++)
        {
            pre.push_back('0');
        }
        set<string>ust;
       
        for(auto str:nums)
        {
           
          
            ust.insert(str);
        }
        if(ust.find(pre)==ust.end())
            {
                return pre;
              
            }
        
        char ch='1';
        for(int i=0;i<nums[0].length();i++)
        {
            pre.at(i)=ch;
            if(ust.find(pre)==ust.end())
            {
                return pre;
                
            }
            pre.at(i)='0';
        }
        return "hie";
        
    }
};
