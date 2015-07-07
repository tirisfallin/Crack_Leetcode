class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next)
            return head;
        ListNode * find=head,*temp;
        int num=1;
        while(find->next!=NULL){
            find=find->next;
            num++;
        }
        find->next=head;
        k=k%num;
        find=head;
        for(int i=0;i<num-k-1;i++)
            find=find->next;
        head=find->next;
        find->next=NULL;
        return head;
    }
};
