// LINK=https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/


class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        vector<int>v;
        
        for(int i=0;i<arr.size();i++)
        {
            int x=arr[i], flag=0;
            for(int j=i+1;j<arr.size();j++)
            {
                  if(arr[j]<=x)
                  {
                      v.push_back(x-arr[j]);
                      flag++;
                      break;
                  }
            }
            if(flag==0)
            v.push_back(x);
        }
        return v;
    }
};
