class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode* first=head,*second=head->next,*tail=head->next;
        first->next=second->next;
        second->next=first;
        tail=first;
        ListNode * ret=second;
        
        while(tail->next&&tail->next->next){
            first=tail->next;
            second=tail->next->next;
            first->next=second->next;
            second->next=first;
            tail->next=second;
            tail=first;
        }
        
        
        return ret;
    }
};
