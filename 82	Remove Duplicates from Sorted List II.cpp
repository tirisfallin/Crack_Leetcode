class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head||!head->next)
            return head;
        ListNode ** cur=&head;
        while(*cur){
            if((*cur)->next&&(*cur)->next->val==(*cur)->val){
                ListNode * temp=(*cur)->next;
                while(temp&&temp->val==(*cur)->val){
                    temp=temp->next;
                }
                *cur=temp;
                
            }
            else
                cur=&((*cur)->next);
        }
        return head;
        
    }
};
