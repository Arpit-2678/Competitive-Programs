//  LINK=https://leetcode.com/problems/shifting-letters/


class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        char arr[26]{0};
        char ch='a';
        vector<unsigned long long>v(shifts.size(),0);
        v[shifts.size()-1]=shifts[shifts.size()-1];
        for(int i=0;i<26;i++)
        { 
            arr[i]=ch++;  
        }
     
        for(int i=shifts.size()-2;i>=0;i--)
        {
            v[i]=shifts[i]+v[i+1];
        }
        
        for(int i=0;i<shifts.size();i++)
        {
             
            long long x= (s.at(i)-'a') + (v[i] * 1LL);
            if(x>=26)
            {
                long long mul=x/26;
                x=x-(mul*26);
            }
            
             s.at(i)=arr[x];
        }

        return s;
    }
};
