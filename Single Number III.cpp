//  LINK=https://leetcode.com/problems/single-number-iii/



/* approach:
1) since all the numbers are present twice so after xoring all the numbers of array so in the last bitwise xor of our required numbers will be stored. 

2) now to retrive the two numbers wwe will first find the first set bit  position in our ans.

3) now we will traverse array again to find all the numbers which are having set bit at obtained position in step 2.

4) after that we will be having one of the number of our ans and then xoring this again with the result obtained in step 1 will give our second number.

*/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        int res=0;
        
//         O(n) since traversing linerally (assuming bitwise XOR  is constant time operation)
        for(auto it:nums)
        {
            res^=it;
        }
        int temp=res;
        int bit=1,pos=0;
        
//         O(1) since maximum can be 32 operations
        while((bit&res)==0)
        {
	        pos++;
	         bit=bit<<1;
        }
        int pre_ans=0;
        int temp1=1<<pos;
        
//     O(n) traversing array      
        for(int i=0;i<nums.size();i++)
        {
	          if((nums[i]&temp1)>=1)
                  pre_ans^=nums[i];
        }
        v.push_back(pre_ans);
        v.push_back(temp^pre_ans);
        return v;
//          Overall TC =O(n)+O(1)+O(n)=O(n);
        
        
    }
};
