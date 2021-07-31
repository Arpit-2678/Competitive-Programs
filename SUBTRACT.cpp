// LINK=https://www.interviewbit.com/problems/subtract/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::subtract(ListNode* A) {
    vector<int>v;
    ListNode* slow=A;
    ListNode* fast=A;
    while(fast!=nullptr and fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
     if(fast!=nullptr)
     slow=slow->next;

     while(slow!=nullptr)
     {
         v.push_back(slow->val);
         slow=slow->next;
     }
     slow=A;
     while(slow!=nullptr and !v.empty())
     {
         slow->val=(v.back()-slow->val);
         v.pop_back();
         slow=slow->next;
     }
    return A;
}
