class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode * runner=head;
        ListNode * walker=head;
        while(walker->next!=NULL&&runner->next!=NULL&&runner->next->next!=NULL){

        walker=walker->next;
        runner=runner->next->next;
        if(walker==runner)
            return true;
    }
        return false;
    }
};
