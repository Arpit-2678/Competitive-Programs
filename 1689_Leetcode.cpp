// LINK=https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/




class Solution {
public:
    int minPartitions(string n) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
         int arr[10] {0};
        for(auto it:n)
        {
            arr[it-'0']=1;
        }
        for(int i=9;i>=0;i--)
        {
            if(arr[i])
                return i;
        }
        return 0;
        
    }
};
