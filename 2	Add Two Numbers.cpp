class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        ListNode* ret=new ListNode(1);
        ListNode* ret2=ret;
        int temp=0;
        bool digit=false;
        temp=l1->val+l2->val;
        l1=l1->next;
        l2=l2->next;
        if(temp>=10)
        {temp=temp-10,digit=true;}
        ret->val=temp;
        while(l1!=NULL&&l2!=NULL)
        {
            temp=l1->val+l2->val;
            l1=l1->next;
            l2=l2->next;
            if(digit)
                temp++;
            digit=false;
            if(temp>=10)
            temp=temp-10,digit=true;
            ret->next=new ListNode(temp);
            ret=ret->next;
            temp=0;
        }
        if(l1==NULL)
            while(l2!=NULL){
                temp=l2->val;
                if(digit)
                    temp++;
                digit=false;
                if(temp>=10)
                    temp=temp-10,digit=true;
                ret->next=new ListNode(temp);
                ret=ret->next;
                temp=0;
                l2=l2->next;
            }
        else
            while(l1!=NULL){
                temp=l1->val;
                if(digit)
                    temp++;
                digit=false;
                if(temp>=10)
                    temp=temp-10,digit=true;
                ret->next=new ListNode(temp);
                ret=ret->next;
                temp=0;
                l1=l1->next;
            }
        if(digit)
            ret->next=new ListNode(1);
        return ret2;
        
        
    }
};
