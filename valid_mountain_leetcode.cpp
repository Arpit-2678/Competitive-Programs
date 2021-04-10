// LINK=https://leetcode.com/problems/valid-mountain-array/submissions/



class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
        {
            return false;
        }
       
        int pos=0,pos2=0;
        int maxii=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>maxii)
            {
                maxii=arr[i];
                pos=i;
            }
        }
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]==maxii)
            {
                pos2=i;
                break;
            }
        }
        if(pos!=pos2)
            return false;
         if(is_sorted(arr.begin(),arr.end()))
            return false;
        vector<int>v(arr);
        reverse(v.begin(),v.end());
         if(is_sorted(v.begin(),v.end()))
            return false;
        auto it=unique(v.begin(),v.end());
        v.resize(distance(v.begin(),it));
        if(v.size()!=arr.size())
            return false;
        
        int flag=0;
        if(is_sorted(arr.begin(),arr.begin()+pos+1))
            flag++;
        reverse(arr.begin()+pos,arr.end());
        if(is_sorted(arr.begin()+pos,arr.end()))
            flag++;
        if(flag==2)
            return true;
        else
            return false;
        
    }
};
