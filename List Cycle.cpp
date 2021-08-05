// LINK=https://www.interviewbit.com/problems/list-cycle/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    ListNode* slow=A;
    ListNode* fast=A;
    int flag=0;

    while(fast!=NULL and fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            flag++;
          break;
        }
    }
    if(!flag)
    return NULL;
    
    slow=A;
    if(slow==fast)
    return A;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
