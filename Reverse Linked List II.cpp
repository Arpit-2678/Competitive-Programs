// LINK=https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/606/week-4-june-22nd-june-28th/3789/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
        ListNode* lf = head; 
        for(int i=1;i<left;i++)
        {
            lf= lf->next;
        }
        
        ListNode* temp=lf;
        for(int i = 0; i<(right-left+1);i++)
        {
            v.push_back(temp->val);
             temp=temp->next;
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++)
        {
            lf->val = v[i];
            lf=lf->next;
        }
    return head;      
    }
};
