 class Solution {
 public:
 void connect(TreeLinkNode *root) {
     deque<TreeLinkNode *> s;
     TreeLinkNode * before=NULL;
     if(!root)
         return;
     s.push_back(root);
     s.push_back(NULL);
     while(!s.empty()){
         TreeLinkNode * temp=s.front();
         s.pop_front();
         if(before!=NULL)
             before->next=temp;
         before=temp;
         if(temp==NULL){
             if(!s.empty())
             s.push_back(NULL);
             continue;
         }
         if(temp->left)
             s.push_back(temp->left);
         if(temp->right)
             s.push_back(temp->right);
         
     }
     
 }
 };
