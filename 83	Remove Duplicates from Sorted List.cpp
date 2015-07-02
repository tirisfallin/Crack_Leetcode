class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode *ret=head;
        ListNode *next=head->next;
        while(ret!=NULL){
            next=ret->next;
            if(next!=NULL&&next->val==ret->val){
                ret->next=next->next;
                
            }
            else
                ret=ret->next;
        }
        return head;
        
    }
};
