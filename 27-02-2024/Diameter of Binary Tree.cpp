



//this code is functional code no header files or main function are not included.
class Solution {
public:
    int height(TreeNode* root,int &ans)
    {
        if(root==NULL)
        return 0;
        int lh=height(root->left,ans);
        int rh=height(root->right,ans);
        ans=max(ans,lh+rh+1);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        height(root,ans);
        return ans-1;
    }
};