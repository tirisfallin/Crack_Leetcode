class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        ListNode* ret;
        if(l1->val<l2->val)
        ret=l1,l1=l1->next;
        else
        ret=l2,l2=l2->next;
        ListNode* ret2=ret;
        while(l1!=NULL&&l2!=NULL)
        {if(l1->val<l2->val)
           ret->next=l1,l1=l1->next,ret=ret->next;
        else
            ret->next=l2,l2=l2->next,ret=ret->next;
        }
        if(l1==NULL)
            ret->next=l2;
        else
            ret->next=l1;
        return ret2;
        
    }
};
