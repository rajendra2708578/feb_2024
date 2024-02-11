



class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    bool check(Node *root)
    {
        if(root==NULL|| (root->left==NULL && root->right==NULL))
        return true;
        int value=0;
        if(root->left)
        value+=root->left->data;
        if(root->right)
        value+=root->right->data;
        if(root->data!=value|| check(root->left)==false|| check(root->right)==false)
        return false;
        else
        return true;
    
    }
    int isSumProperty(Node *root)
    {
     // Add your code here
        return check(root);
    }
};