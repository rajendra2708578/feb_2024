



// this code is functional code no header files or main function are not included.

class Solution {
public:
    bool check(vector<int>&vec)
    {
        // if(vec.size()==1)
        // return true;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]%2==0)
            return true;
        }
        for(int i=0;i<vec.size()-1;i++)
        {
            if(vec[i]>=vec[i+1])
            return true;
        }
        return false;
    }
    bool check1(vector<int>&vec)
    {
        // if(vec.size()==1)
        // return true;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]%2)
            return true;
        }
        for(int i=0;i<vec.size()-1;i++)
        {
            if(vec[i]<=vec[i+1])
            return true;
        }
        return false;
    }
    bool isEvenOddTree(TreeNode* root) {
        vector<int>old,even;
        queue<TreeNode*>q;
        q.push(root);
        int count=0;
        while(!q.empty())
        {
            int sz=q.size();
            vector<int>vec;
            for(int i=0;i<sz;i++)
            {
                auto it=q.front();
                vec.push_back(it->val);
                q.pop();
                if(it->left)
                q.push(it->left);
                if(it->right)
                q.push(it->right);
            }
          if(count%2==0)
          {
              if(check(vec))
             {
                //  cout<<"false for "<<count<<endl;
                //  for(auto it:vec)
                //  {
                //      cout<<it<<" ";
                //  }
                //  cout<<endl;
                 return false;
             }
          }
          else
          {
              if(check1(vec))
              {
                //   cout<<"false for "<<count<<endl;
                  return false;
              }
          }
          count++;

        }
        return true;
    }
};