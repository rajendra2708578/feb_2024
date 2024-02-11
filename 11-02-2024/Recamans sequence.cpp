


//this is the function code no header files or main function are included.
 vector<int> recamanSequence(int n){
        // code here
        vector<int>dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        dp[2]=3;
        set<int>st;
        st.insert(0);
        st.insert(1);
        st.insert(3);
        for(int i=3;i<=n;i++)
        {
            if(dp[i-1]-i>0 && st.find(dp[i-1]-i)==st.end())
            {
                dp[i]=dp[i-1]-i;
                st.insert(dp[i-1]-i);
            }
            else
            {
                dp[i]=dp[i-1]+i;
                st.insert(dp[i-1]+i);
            }
        }
        return dp;
    }