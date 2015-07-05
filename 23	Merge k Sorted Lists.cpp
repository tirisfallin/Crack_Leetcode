class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
                if(lists.empty())
            return NULL;
        ListNode * temp;
        while(lists.size()!=1){
            temp=mergeTwoLists(lists[0], lists[1]);
            lists.erase(lists.begin(),lists.begin()+2);
            lists.push_back(temp);
        }
            return lists[0];
    }
    ListNode* mergeTwoLists(ListNode *l1,ListNode* l2){
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        ListNode * ret=new ListNode(0);
        ListNode * r=ret;
        if(l1->val<l2->val)
            ret->val=l1->val,l1=l1->next;
        else
            ret->val=l2->val,l2=l2->next;
        while(l1&&l2){
            ret->next=new ListNode(0);
            ret=ret->next;
            if(l1->val<l2->val)
                ret->val=l1->val,l1=l1->next;
            else
                ret->val=l2->val,l2=l2->next;
        }
        if(l1)
            while(l1)
            {
                ret->next=new ListNode(0);
                ret=ret->next;
                ret->val=l1->val;
                l1=l1->next;
            }
        if(l2)
            while(l2)
            {
                ret->next=new ListNode(0);
                ret=ret->next;
                ret->val=l2->val;
                l2=l2->next;
            }
        return r;
        
    }
};
