class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return NULL;
        ListNode *ret=head;
        ListNode *next;
        while(ret->val==val)
        {
            ret=ret->next;
            if(ret==NULL)
                return NULL;
        }
        ListNode *re=ret;
        while(ret!=NULL&&ret->next!=NULL){
            next=ret->next;
            if(next->val==val){
                ret->next=next->next;
            }
            if(!(next!=NULL&&next->val==val))
            ret=next;
        }
        return re;
        
    }
};
