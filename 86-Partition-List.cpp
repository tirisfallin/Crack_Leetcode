class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head||!head->next)
            return head;
        ListNode *start=head,*end=head,*temp,*cur;
        ListNode  * origin=start;
        head=head->next;
        while(head){
            if(head->val<x)
            {
                temp=head;
                head=head->next;
                temp->next=start;
                start=temp;
            }
            else{
                temp=head;
                head=head->next;
                end->next=temp;
                end=temp;
            }
                
        }
        end->next=NULL;
        //reorder
        cur=start->next;
        if(origin->val<x)
            origin=origin->next;
        cur=start->next;
        if(start!=origin)
        start->next=origin;
        temp=start;
        while(cur&&cur->val<x){
            temp=cur;
            cur=cur->next;
            temp->next=start;
            start=temp;
        }
        return start;
        
    }
};
