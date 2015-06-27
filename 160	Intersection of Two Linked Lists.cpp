class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)
            return NULL;
        ListNode * l1=headA;
        ListNode * l2=headB;
        int len1=length(l1),len2=length(l2);
        while(len1>len2){
            len1--;
            l1=l1->next;
        }
        while(len2>len1){
            len2--;
            l2=l2->next;
        }
        while(l1!=NULL){
        if(l1==l2)
            return l1;
            l1=l1->next;
            l2=l2->next;
        }
        return  NULL;
    }
    int length(ListNode * node){
        ListNode * head=node;
        int num=0;
        while(head->next!=NULL){
            num++;
            head=head->next;
            
        }
        return  num;
    }
};
