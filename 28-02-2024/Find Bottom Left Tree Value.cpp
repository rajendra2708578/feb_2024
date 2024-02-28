


//this code contaion the functional code no header files or main function are not included.
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
      int ans=root->val;
      queue<TreeNode*>q;
      q.push(root);
      while(!q.empty())
      {
          int n=q.size();
          for(int i=0;i<n;i++)
          {     auto it=q.front();
                q.pop();
              if(i==0)
                ans=it->val;
                if(it->left)
                q.push(it->left);
                if(it->right)
                q.push(it->right);
          }
      }  
      return ans;
    }
};