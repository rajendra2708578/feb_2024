







//this is the functional code no header files or main are includede in it
class Solution
{
public:
    void inorder(Node *root,vector<int>&vec)
    {
        if(root==NULL)
        return;
        inorder(root->left,vec);
        vec.push_back(root->data);
        inorder(root->right,vec);
    }
    Node *flattenBST(Node *root)
    {
        // code here
        vector<int>vec;
        inorder(root,vec);
        Node *dummy=new Node(-1);
        Node *temp=dummy;
        for(auto it:vec)
        {
            Node *newnode=new Node(it);
            temp->right=newnode;
            temp=temp->right;
        }
        return dummy->right;
    }
};