// LINK=https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
public:
    
    void fun( vector<string>&res, string digits,string curr, int ind,  vector<string>&keypad){
        
        if(ind==digits.size())
        {
            res.push_back(curr);
            return;
        }
        
        string req=keypad[digits.at(ind)-'0'];
        for(int i=0;i<req.size();i++){
            fun(res,digits,curr+req[i], ind+1, keypad);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.empty() or digits.size()==0)
            return res;
        
        vector<string>keypad;
        keypad.push_back("0");
        keypad.push_back("1");
        keypad.push_back("abc");
        keypad.push_back("def");
        keypad.push_back("ghi");
        keypad.push_back("jkl");
        keypad.push_back("mno");
        keypad.push_back("pqrs");
        keypad.push_back("tuv");
        keypad.push_back("wxyz");
        
        fun(res,digits,"",0,keypad);
        return res;
        
        
    }
};
