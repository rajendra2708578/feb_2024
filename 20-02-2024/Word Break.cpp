


//this is functional code no header files or main are not included in it.

class Solution
{
public:
    bool check(string &s,vector<string>&B)
    {
        for(auto it:B)
        {
            if(it==s)
            return 1;
        }
        return 0;
    }
    int solve(int index,string str,vector<string>&B,vector<int>&dp)
    {
        if(index>=str.size())
        return 1;
        if(dp[index]!=-1)
        return dp[index];
        for(int i=index;i<str.size();i++)
        {
            int len=(i-index)+1;
            string s=str.substr(index,len);
            if(check(s,B) && solve(i+1,str,B,dp))
            return dp[index]=1;
        }
        return dp[index]=0;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
    vector<int>dp(A.size()+1,-1);
        return solve(0,A,B,dp);
    }
};