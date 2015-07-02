class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode * temp,*cur=head;
        while(cur->next){
            temp=cur->next;
            cur->next=temp->next;
            temp->next=head;
            head=temp;
            
        }
        return head;
        
    }
};
