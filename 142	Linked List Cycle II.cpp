class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return NULL;
        ListNode *walker=head;
        ListNode *runner=head;
        bool hascycle=false;
        while(!hascycle&&walker->next&&runner->next&&runner->next->next){
            walker=walker->next;
            runner=runner->next->next;
            if(walker==runner)
                hascycle=true;
        }
        if(hascycle)
        {
            walker=head;
            while(walker!=runner){
                walker=walker->next;
                runner=runner->next;
            }
            return walker;
        }
        return NULL;
        
        
    }
};
