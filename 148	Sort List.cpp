class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode *walker=head,*runner=head->next->next;
        while(runner&&runner->next){
            walker=walker->next;
            runner=runner->next->next;
        }
        ListNode * half2=sortList(walker->next);
        walker->next=NULL;
        
        return merge(sortList(head),half2);
    }
    
    ListNode* merge(ListNode* head1,ListNode * head2) {
        if(!head1&&!head2)
            return NULL;
        ListNode * ret=new ListNode(0),*r=ret;
        while(head1&&head2){
            if(head1->val<head2->val)
                ret->next=new ListNode(head1->val),head1=head1->next;
            else
                ret->next=new ListNode(head2->val),head2=head2->next;
            ret=ret->next;
        }
        if(head1)
            ret->next=head1;
        else
            ret->next=head2;
        return r->next;
    }
};
