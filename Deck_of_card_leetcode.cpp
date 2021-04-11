// LINK=https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/


class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
       if(deck.size()<2)
           return false;
        unordered_map<int,int>umap;
        for(auto it:deck)
        {
            umap[it]++;
        }
      
        if(umap.size()==deck.size())
            return false;
       
        int small=INT_MAX;
        for(auto it:umap)
        {
            if(it.second<2)
                return false;
            if(it.second<small)
                small=it.second;
             
        }
        int k=2;
       while(k<=small)
       {
           int flag=0;
           for(auto it:umap)
        {
            if(it.second%k==0)
                flag++;
        }
           if(flag==umap.size())
               return true;
           k++;
       }
        return false;
        
        
    }
};
