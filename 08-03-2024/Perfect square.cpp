

// this code contain only the functional code no header files or main functional code are not included.
class Solution {
public:
    long long int solve(int n,vector<long long int>&dp)
    {
        if(n==0)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        long long int minv=INT_MAX;
        for(long long int i=1;i<=n;i++)
        {
            if(i*i<=n)
            minv=min(minv,solve(n-(i*i),dp)+1);
            else
            break;
        }
        return dp[n]=minv;
    }
    int numSquares(int n) {
        vector<long long int>dp(n+1,-1);
        return solve(n,dp);
    }
};