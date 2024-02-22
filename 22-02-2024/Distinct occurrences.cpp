




//this is the functional code no header files or main are included in it.
#define ll long long int
const int mod=1e9+7;
class Solution
{
    public:
    int solve(int ind1,int ind2,string &str1,string &str2,vector<vector<int>>&dp)
    {
        if(ind2>=str2.size())
        return 1;
        if(ind1>=str1.size())
        {
            if(ind2>=str2.size())
            return 1;
            else
            return 0;
        }
        if(dp[ind1][ind2]!=-1)
        return dp[ind1][ind2];
        int total=0;
        if(str1[ind1]==str2[ind2])
        {
            total=(total+solve(ind1+1,ind2,str1,str2,dp))%mod;
            total=(total+solve(ind1+1,ind2+1,str1,str2,dp))%mod;
        }
        else
        {
            total=(total+solve(ind1+1,ind2,str1,str2,dp))%mod;
        }
        return dp[ind1][ind2]=total;
        
    }
    int subsequenceCount(string s, string t)
    {
      //Your code here
      vector<vector<int>>dp(s.size()+1,vector<int>(t.size()+1,-1));
      return solve(0,0,s,t,dp);
    }
};
 