//  LINK=https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/



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
    ListNode* deleteDuplicates(ListNode* head) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        ListNode* temp=head;
        ListNode* prev;
      
        ListNode* nh=new ListNode(0,head);
       
        prev=nh;
        while(temp!=nullptr)
        {
            if(temp->next!=nullptr and temp->val==temp->next->val)
            {
                while(temp->next!=nullptr and temp->val==temp->next->val)
                {
                    temp=temp->next;
                }
                prev->next=temp->next;
            }
            else
                prev=prev->next;
            
            temp=temp->next;
        }
       
        return nh->next;
    }
};





