// LINK=https://leetcode.com/problems/plus-one/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size();
        int c=1;
        for(int i=n-1;i>=0;i--){
            
            digits[i]+=c;
            c=digits[i]/10;
            digits[i]%=10;
            
        }
        if(c==1)
            digits.insert(digits.begin(),1);
        
        return digits;
        
    }
};
