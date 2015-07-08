class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode * temphead=new ListNode(0);
        temphead->next=head;
        head=temphead;
        ListNode * cur=temphead,*temp;
        ListNode * begin;
        head=temphead;
        bool flag=true;
        while(flag){
            cur=head;
            flag=false;
            while(cur->next&&cur->next->next){
                begin=cur;
                if(cur->next->val>cur->next->next->val){
                    temp=cur->next;
                    cur->next=cur->next->next;
                    temp->next=cur->next->next;
                    cur->next->next=temp;
                    flag=true;
                }
                cur=cur->next;
            }
           
        }
        return temphead->next;
    }
};
