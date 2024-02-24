


// this code is functional code no header files or main function are included in  it.


void dfs(int node,int count,vector<pair<int,int>>adj[],vector<int>&vis,set<int>&st)
    {
        vis[node]=1;
        st.insert(node);
        for(auto it:adj[node])
        {
            if(vis[it.first]==0)
            {
                if(it.second>=count)
                dfs(it.first,it.second,adj,vis,st);
            }
        }
    }
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<pair<int,int>>adj[n];
        for(auto it:meetings)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        vector<int>time(n,INT_MAX);
        time[0]=0;
        time[firstPerson]=0;
        stack<pair<int,int>>st;
        st.push({0,0});
        st.push({firstPerson,0});
        while(!st.empty())
        {
            auto it=st.top();
            st.pop();
            for(auto x:adj[it.first])
            {
                if(x.second>=it.second && time[x.first]>it.second)
                {
                    time[x.first]=x.second;
                    st.push({x.first,x.second});
                }
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(time[i]!=INT_MAX)
            ans.push_back(i);
        }
        return ans;
    }