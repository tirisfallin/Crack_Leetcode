class Solution {
public:
     ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(!head||!head->next)
            return head;
         ListNode * temp,*tail=backk(head,m-2),*end=backk(head,n);
         ListNode *cur=tail->next,*begin=tail->next;
         if(m==1){
             cur=head;
             begin=head;
         }
        while(cur->next&&cur->next!=end){
            temp=cur->next;
            cur->next=temp->next;
            temp->next=begin;
            begin=temp;
            
        }
         if(m>1)
             tail->next=begin;
         else
             head=begin;
         return head;
        
    }
    ListNode* backk(ListNode* head,int k){
        int i=0;
        if(k==0)
            return head;
        if(!head)
            return NULL;
        ListNode* ret=head;
        while(ret!=NULL&&i<k){
            i++;
            ret=ret->next;
        }
        return ret;
        
    }

};
