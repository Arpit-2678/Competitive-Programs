// LINK=https://leetcode.com/problems/add-to-array-form-of-integer/

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>v;
        if(k==0)
            return num;
        int carry=0,sum=0,flag=0;
        for(int i=num.size()-1;i>=0 or k!=0;i--)
        {
            int x=k%10;
            if(i>=0)
             sum=num[i]+x+carry;
            else
            {
                flag++;
                sum=x+carry;
               
            }
            if(sum>9)
            {
                carry=sum/10;
                v.push_back(sum%10);
            }
            else
            {
                v.push_back(sum%10);
                carry=0;
            }
            k=k/10;
            
        }
        if(carry)
        v.push_back(carry);
      
        reverse(v.begin(),v.end());
        return v;
        
    }
};
