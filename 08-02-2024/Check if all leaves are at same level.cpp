


// his code is functional code no header files or main are not included in it.


class Solution{
  public:
    /*You are required to complete this method*/
    void inorder(Node *root,set<int>&st,int d)
    {
        if(root==NULL)
        return ;
        if(root->left==NULL && root->right==NULL)
        {
            st.insert(d);
            return;
        }
        inorder(root->left,st,d+1);
        inorder(root->right,st,d+1);
    }
    bool check(Node *root)
    {
        //Your code here
        set<int>st;
        inorder(root,st,0);
        return st.size()==1;
    }
};