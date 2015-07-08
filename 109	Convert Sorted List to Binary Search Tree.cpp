class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return sortedLIstToBST(head,NULL);
        
    }
    TreeNode * sortedLIstToBST(ListNode * begin,ListNode * end){
        if(begin==end)
            return NULL;
        if(begin->next==end){
            TreeNode *ret=new TreeNode(begin->val);
            return ret;
        }
        ListNode *runner=begin,*middle=begin;
        while(runner!=end&&runner->next!=end){
            runner=runner->next->next;
            middle=middle->next;
        }
        TreeNode *ret=new TreeNode(middle->val);
        ret->left=sortedLIstToBST(begin, middle);
        ret->right=sortedLIstToBST(middle->next, end);
        return ret;
    }
};
