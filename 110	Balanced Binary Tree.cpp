class Solution {
 public:
    int depth(TreeNode* root,bool& isbalanced){
        if(!isbalanced||!root)
            return 0;
        int leftdepth=depth(root->left,isbalanced),rightdepth=depth(root->right,isbalanced);
        int i=leftdepth-rightdepth;
        if(i>1||i<-1)
            isbalanced=false;

        return max(leftdepth,rightdepth)+1;
    }
     bool isBalanced(TreeNode* root) {
         if(!root)
             return true;
         bool flag=true;
         int i=depth(root,flag);
         return flag;
         
     }
 };
