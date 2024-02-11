


//this code contain only the functional code no header files or main function are included.
int countSubstrings(string s) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int count=n;
        for(int i=0;i<n;i++)
        dp[i][i]=true;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=true;
                count++;
            }
        }
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<(n-k)+1;i++)
            {
                int j=(i+k)-1;
                if(dp[i+1][j-1]==true && s[i]==s[j])
                {
                    dp[i][j]=true;
                    count++;
                }
            }
        }
        return count;
    }