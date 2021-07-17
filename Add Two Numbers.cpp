//  LINK=https://leetcode.com/problems/add-two-numbers/


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
    void insert_at_tail(ListNode*&head, int data)
    {
        if(head==nullptr)
          head=new ListNode(data);
        else
        {
            ListNode* temp=head;
            while(temp->next!=nullptr)
                temp=temp->next;
            temp->next=new ListNode(data);
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ios_base::sync_with_stdio(0);
        // cin.tie(0);
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* nn=nullptr;
        int carry=0;
        int x=0;
        while(temp1!=nullptr and temp2!=nullptr)
        {
            x=temp1->val+temp2->val+ carry;
            insert_at_tail(nn,x%10);
            carry=x/10;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=nullptr)
        {
            x=temp1->val+carry;
            insert_at_tail(nn,x%10);
            carry=x/10;
            temp1=temp1->next;
        }
        while(temp2!=nullptr)
        {
            x=temp2->val+carry;
            insert_at_tail(nn,x%10);
            carry=x/10;
            temp2=temp2->next;
        }
        if(carry)
           insert_at_tail(nn,carry); 
        return nn;
        
    }
};
