// LINK=https://leetcode.com/problems/maximum-erasure-value/



class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        set<int>ust;
        deque<int>dq;
        int i=0,j=0,sum=0,maxi=INT_MIN;
        while(j<nums.size())
        {
            if(ust.find(nums[j])==ust.end())
            {
                dq.push_back(nums[j]);
                ust.insert(nums[j]);
                sum+=nums[j];
                
            }
            else
            {
                 
                while(dq.front()!=nums[j])
                {
                    sum-=dq.front();
                     ust.erase(dq.front());
                    dq.pop_front();
                    
                    
                }
                sum-=dq.front();
                //ust.erase(dq.front());
                    dq.pop_front();
                dq.push_back(nums[j]);
                sum+=nums[j];
                
            }
            maxi=max(sum,maxi);
            
            j++;
        }
        return maxi;
        
    }
};
