

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node *roota;
    void inorder(Node *root,int a,unordered_map<Node*,Node*>&mp)
    {
        if(root==NULL)
        return;
        if(root->data==a)
        roota=root;
        if(root->left)
        {
            mp[root->left]=root;
            inorder(root->left,a,mp);
        }
        if(root->right)
        {
            mp[root->right]=root;
            inorder(root->right,a,mp);
        }
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
        unordered_map<Node*,Node*>mp;
        // Node *roota=NULL;
        inorder(root,a,mp);
        queue<pair<int,Node*>>pq;
        pq.push({0,roota});
        set<Node*>st;
        st.insert(roota);
        while(!pq.empty())
        {
            auto it=pq.front();
            pq.pop();
            int dis=it.first;
            Node *ele=it.second;
            if(ele->data==b)
            return dis;
            if(ele->left && st.find(ele->left)==st.end())
            {
                pq.push({dis+1,ele->left});
                st.insert(ele->left);
            }
            if(ele->right && st.find(ele->right)==st.end())
            {
                pq.push({dis+1,ele->right});
                st.insert(ele->right);
            }
            if(mp[ele] && st.find(mp[ele])==st.end())
            {
                pq.push({dis+1,mp[ele]});
                st.insert(mp[ele]);
            }
            
            
        }
        return -1;
        
    }
};