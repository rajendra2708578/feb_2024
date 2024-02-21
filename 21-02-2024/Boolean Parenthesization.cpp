


//This code is functional code no header files or main are included in  it.

#define ll long long int
const int mod=1003;
class Solution{
public:
    int solve(int left,int right,int need,string &str,vector<vector<vector<int>>>&dp)
    {
        if(left>right)
        return 0;
        if(left==right)
        {
            if(need==1)
            return str[left]=='T';
            else
            return str[left]=='F';
        }
        if(dp[left][right][need]!=-1)
        return dp[left][right][need];
        int ans=0;
        for(int i=left+1;i<=right-1;i+=2)
        {
            int lt=solve(left,i-1,1,str,dp);
            int lf=solve(left,i-1,0,str,dp);
            int rt=solve(i+1,right,1,str,dp);
            int rf=solve(i+1,right,0,str,dp);
            if(str[i]=='&')
            {
                if(need)
                {
                    ans=(ans+(lt*rt)%mod)%mod;     
                }
                else
                {
                    ans=(ans+(lf*rf)%mod+(lf*rt)%mod+(lt*rf)%mod)%mod;
                }
            }
            else if(str[i]=='^')
            {
                if(need)
                {
                    ans=(ans+(lt*rf)%mod+(lf*rt)%mod)%mod;
                }
                else
                {
                    ans=(ans+(rt*lt)%mod+(lf*rf)%mod)%mod;
                }
            }
            else
            {
                if(need)
                {
                    ans=(ans+(lt*rt)%mod+(lt*rf)%mod+(lf*rt)%mod)%mod;
                }
                else
                {
                    ans=(ans+(lf*rf)%mod)%mod;
                }
            }
        }
        return dp[left][right][need]=ans;
    }
    int countWays(int n, string s){
        // code here
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(n+1,vector<int>(2,-1)));
        return solve(0,n-1,1,s,dp);
    }
};