class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        int num=1;
        ListNode * newhead=head,*tail=head;;
        ListNode * cur=head;
        ListNode* next,*ret=head;
        ListNode* temp,*newcur=head;
        bool first=true;
        while(newcur!=NULL&&(newcur=backk(newcur,k-1))!=NULL){
            newcur=newcur->next;
        while(num!=k&&cur->next!=NULL){
            next=cur->next;
            cur->next=next->next;
            next->next=newhead;
            newhead=next;
            num++;
        }
            
            if(first)
            {
                ret=newhead;
                first=false;
            }
            else
                tail->next=newhead;
            tail=cur;
            
            cur=newcur;
            newhead=newcur;
            num=1;
        }
        return ret;
    }
    ListNode* backk(ListNode* head,int k){
        int i=1;
        if(k==0)
            return head;
        if(head==NULL||head->next==NULL)
            return NULL;
        ListNode* ret=head->next;
        while(ret!=NULL&&i<k){
            i++;
            ret=ret->next;
        }
        return ret;

    }
};
