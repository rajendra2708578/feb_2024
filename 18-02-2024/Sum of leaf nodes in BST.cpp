





//this is functional code no header files or main are not included.

class Solution
{
    public:
        /*You are required to complete below method */
        void inorder(Node *root,int &sum)
        {
            if(root==NULL)
            return;
            if(root->left==NULL && root->right==NULL)
            {
                sum+=root->data;
                return;
            }
            inorder(root->left,sum);
            inorder(root->right,sum);
        }
        int sumOfLeafNodes(Node *root ){
             /*Your code here */
             int sum=0;
             inorder(root,sum);
             return sum;
        }
};