//LINK=https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/603/week-1-june-1st-june-7th/3769/



class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();  
        unordered_set<int>st;
      for(int i=0;i<n;i++)
      {
          st.insert(arr[i]);
      }
      int len=0;

      for(int i=0;i<n;i++)
      {
          if(st.find(arr[i]-1)==st.end())
          {
              int next_no=arr[i]+1;
              int cnt=1;
              while(st.find(next_no)!=st.end())
              {
                  next_no++;
                  cnt++;
              }
              len=max(len,cnt);
          }
      }
      return len;
        
    }
};
