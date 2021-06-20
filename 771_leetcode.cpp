// LINK=https://leetcode.com/problems/jewels-and-stones/



class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>ump;
        for(auto it:stones)
        {
            ump[it]++;
        }
        int cnt=0;
        for(auto it:jewels)
        {
            if(ump.find(it)!=ump.end())
                cnt+=ump[it];
        }
        return cnt;
    }
};
