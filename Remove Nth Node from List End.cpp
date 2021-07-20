// LINK=https://www.interviewbit.com/problems/remove-nth-node-from-list-end/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
     if(head->next==nullptr)
            return nullptr;
          ListNode* fast=head;
     ListNode * slow=head;
     while (fast!=NULL and n!=0)
     {
         fast=fast->next;
         n--;
     }
        if(fast==nullptr)
        {
           head=slow->next;
            return head;
        }
        if(n!=0)
        {
            head=head->next;
            return head;
        }
     while(fast->next!=nullptr)
     {
         fast=fast->next;
         slow=slow->next;
         
     }
        if(slow->next->next!=nullptr)
        {
        ListNode* temp=slow->next->next;
        delete slow->next;
        slow->next=temp;
        }
        else
        {
            delete slow->next;
            slow->next=nullptr;
        }
     return head;
        
}

