class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode ** first=&head,*second=head;
        for(int i=0;i<n;i++)
            second=second->next;
        while(second){
            second=second->next;
            first=&((*first)->next);
        }
        *first=((*first)->next);
        return head;
    }
};
