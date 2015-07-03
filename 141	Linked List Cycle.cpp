/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL||head->next->next==NULL)
            return false;
        ListNode * runner=head->next->next;
        ListNode * walker=head->next;
        if(walker==runner)
            return true;
        while(walker->next!=NULL&&runner->next!=NULL&&runner->next->next!=NULL){

       
        runner=runner->next;
        walker=walker->next;
        if(walker==runner)
            return true;
        runner=runner->next;  
         if(walker==runner)
            return true;
    }
        return false;
    }
};
/*
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode * runner=head;
        ListNode * walker=head;
        while(walker->next!=NULL&&runner->next!=NULL&&runner->next->next!=NULL){

        walker=walker->next;
        runner=runner->next->next;
        if(walker==runner)
            return true;
    }
        return false;
    }
};
*/

