


// this code contain only the function code no header files or mains are icluded.
class Solution {
public:
    int solve(int r,int c1,int c2,int n,int m,vector<vector<int>>&grid,vector<vector<vector<int>>>&dp)
    {
        if(c1<0 || c2<0 || c1>=m || c2>=m)
        return 0;
        if(r==n)
        return 0;
        if(dp[r][c1][c2]!=-1)
        return dp[r][c1][c2];
        int dir[]={-1,0,1};
        long long int cost=0;
        if(c1==c2)
        cost+=grid[r][c1];
        else
        cost+=(grid[r][c1]+grid[r][c2]);

        // cout<<"present cost is "<<cost<<endl;
        int ans=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                
                   int val=solve(r+1,c1+dir[i],c2+dir[j],n,m,grid,dp);
                   ans=max(ans,val);
                
            }
        }
        return dp[r][c1][c2]=cost+ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(m+1,vector<int>(m+1,-1)));
        return solve(0,0,m-1,n,m,grid,dp);

    }
};