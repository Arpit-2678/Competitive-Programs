// LINK=https://leetcode.com/problems/path-crossing/


class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0;
        pair<int,int>p;
        set<pair<int,int>>st;
        st.insert({x,y});
        for(auto it:path)
        {
            if(it=='N')
            {
                y+=1;
                p=make_pair(x,y);
                auto it=st.insert({x,y});
                if(it.second==false)
                    return true;
               
            }
            else if(it=='E')
            {
                x+=1;
                 p=make_pair(x,y);
                auto it=st.insert({x,y});
                if(it.second==false)
                    return true;
              
                
            }
            else if(it=='S')
            {
                y-=1;
                  p=make_pair(x,y);
                auto it=st.insert({x,y});
                if(it.second==false)
                    return true;
                
            }
            else
            {
                x-=1;
                 p=make_pair(x,y);
                auto it=st.insert({x,y});
                if(it.second==false)
                    return true;
            }
        }
       
        return false;
        
    }
};
