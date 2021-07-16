//  LINK=https://leetcode.com/problems/3sum/



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<vector<int>>res;
        vector<int>in;
       set<vector<int>>ust;
         sort(arr.begin(),arr.end());
        int n=arr.size();
    for(int i=0;i<=n-3;i++)
    {
        int start=i+1;
        int end=n-1;
        while(start<end)
        {
            int cs=arr[i]+arr[start]+arr[end];
            if(cs==0)
            {
                in.push_back(arr[i]);
                in.push_back(arr[start]);
                in.push_back(arr[end]);
                if(ust.find(in)==ust.end())
                {
                    ust.insert(in);
                    res.push_back(in);
                }
                in.clear();
                start++;
                end--;
            }
            else if(cs>0)
            {
                end--;
            }
            else
            start++;
            
        }
    }
        sort(res.begin(),res.end());
        auto it=unique(res.begin(),res.end());
        res.resize(distance(res.begin(),it));
    return res;
       
        
        
        
    }
};
