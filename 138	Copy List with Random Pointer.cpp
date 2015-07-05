class Solution {
public:
    unordered_map<RandomListNode*,RandomListNode*> liststore;
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(head==NULL)
            return NULL;
        if(liststore.find(head)!=liststore.end())
            return liststore.find(head)->second;
        RandomListNode *temp=new RandomListNode(head->label);
        liststore[head]=temp;
        temp->next=copyRandomList(head->next);
        temp->random=copyRandomList(head->random);
        return temp;
        
    }
};
