class Solution {
public:
    vector<TreeNode*> generateTrees(int start,int end){
        vector<TreeNode*> t1;
        vector<TreeNode*> t2;
        vector<TreeNode *>ret;
        if(start>end){
            ret.push_back(NULL);
            return ret;
        }
        if(start==end){
            ret.push_back(new TreeNode(start));
            return ret;
        }
        TreeNode * root=new TreeNode(1);
        for(int i=start;i<=end;i++){
            t1=generateTrees(start,i-1);
            t2=generateTrees(i+1,end);
            for(int j1=0;j1<t1.size();j1++)
                for(int j2=0;j2<t2.size();j2++){
                    TreeNode * current=new TreeNode(i);
                    current->left=t1[j1];
                    current->right=t2[j2];
                    ret.push_back(current);
                }
        }
        return ret;
        
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> t1{NULL};
        vector<TreeNode*> t2;
        if(n==0)
            return t1;
        vector<TreeNode*> ret;
        ret=generateTrees(1, n);
        return ret;
    }
};
