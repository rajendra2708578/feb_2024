



// this code is only the functional code no header files or main are included in it.
class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
     map<Node*,Node*>parent;
    vector<Node*>leaf;
    void solve(Node* root){
        if(root->left!=NULL){
            parent[root->left]=root;
            solve(root->left);
        }
        if(root->right!=NULL){
            parent[root->right]=root;
            solve(root->right);
        }
        if(root->left==NULL&& root->right==NULL){
            leaf.push_back(root);
        }
    }
    int printKDistantfromLeaf(Node* root, int k)
    {
    	//Add your code here.
    
         set<Node*>st;
         solve(root);
         for(int i=0;i<leaf.size();i++){
             int r=k;
             while(r>0&& parent.find(leaf[i])!=parent.end()){
                 r--,leaf[i]=parent[leaf[i]];
             }
             if(r==0) st.insert(leaf[i]);
         }
         return st.size();
    	
    }
};