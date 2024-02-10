


// this code is functional code no header files or main are included.
int solve(int i,int j,int n,int k,vector<vector<int>>&arr,int sum,vector<vector<vector<int>>>&dp)
    {
        if(i==n-1&& j==n-1)
        {
            if(sum+arr[i][j]==k)
            return 1;
            else
            return 0;
        }
        if(dp[i][j][sum]!=-1)
        return dp[i][j][sum];
        int a=0,b=0;
        if(i+1<n && sum+arr[i][j]<=k)
        a+=solve(i+1,j,n,k,arr,sum+arr[i][j],dp);
        if(j+1<n && sum+arr[i][j]<=k)
        b+=solve(i,j+1,n,k,arr,sum+arr[i][j],dp);
        return dp[i][j][sum]=a+b;
    }
    long long numberOfPath(int n, int k, vector<vector<int>> arr){
        
        // Code Here
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(n+1,vector<int>(k+1,-1)));
        return solve(0,0,n,k,arr,0,dp);
    }