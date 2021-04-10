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
        int k=1;
        for(int i=0;i<arr.size();i++)
        {
            if (k<arr.size() and arr[k++]==arr[i])
            {
                return false;
            }
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
         if(pos==0 or pos==arr.size()-1)
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
