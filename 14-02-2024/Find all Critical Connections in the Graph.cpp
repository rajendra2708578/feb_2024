




// this code is not a functional code no header files or main are not included.


class Solution {
    int timer=1;
public:
    void dfs(int node,int parent,vector<int>&vis,vector<int>adj[],int time[],int low[],vector<vector<int>>&ans)
    {
        vis[node]=1;
        time[node]=timer;
        low[node]=timer;
        timer++;
        for(auto it:adj[node])
        {
            if(it==parent)continue;
            if(vis[it]==0)
            {
                dfs(it,node,vis,adj,time,low,ans);
                low[node]=min(low[node],low[it]);
                if(low[it]>time[node])
                ans.push_back({min(it,node),max(it,node)});
            }
            else
            {
                low[node]=min(low[node],low[it]);
            }
        }
    }
	vector<vector<int>>criticalConnections(int v, vector<int> adj[]){
	    // Code here
	    int time[v];
	    int low[v];
	    vector<vector<int>>ans;
	    vector<int>vis(v,0);
	    dfs(0,-1,vis,adj,time,low,ans);
	    sort(ans.begin(),ans.end());
	    return ans;
	}
};