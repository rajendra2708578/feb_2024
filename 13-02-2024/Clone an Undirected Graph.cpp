



//this code contain only the functional code no header files or main are included.

class Solution {
public:
    void dfs(Node *newnode,Node *node,map<int,Node*>&mp)
    {
        mp[newnode->val]=newnode;
        for(auto it:node->neighbors)
        {
            bool not_vis=mp.find(it->val)==mp.end();
            Node *new_child;
            if(not_vis)
            new_child=new Node(it->val);
            else
            new_child=mp[it->val];
            newnode->neighbors.push_back(new_child);
            if(not_vis)
            dfs(new_child,it,mp);
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL)
        return node;
        Node *new_start=new Node(node->val);
        map<int,Node*>vis;
        dfs(new_start,node,vis);
        return new_start;
    }
};