


//this is functional code no header files or main function are not included in it.
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
        return true;
        if(p==NULL || q==NULL)
        return false;
        if(p->val==q->val && isSameTree(p->left,q->left) && 
        isSameTree(p->right,q->right))
        return true;
        else
        return false;
    }
};