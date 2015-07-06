
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head||!head->next)
            return ;
        ListNode * first=head,*second=head;
        while(second->next&&second->next->next){
            first=first->next;
            second=second->next->next;
        }
        ListNode * temp;
        ListNode *head2=first->next,*cur=head2->next;
        head2->next=NULL;
        while(cur){
            temp=cur;
            cur=cur->next;
            temp->next=head2;
            head2=temp;
        }

        first->next=NULL;
        first=head;
        second=head;
        while(head2)
        {   second=first->next;
            first->next=head2;
            head2=head2->next;
            first->next->next=second;
            first=second;
        }
    }
};
