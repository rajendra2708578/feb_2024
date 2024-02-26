



//this is a functional code no header files or main function are not included.
 public:
    // Complete this function
   
    long long int count(long long int n)
    {
    	// Your code here
        vector<long long int>dp(n+1,0);
        dp[0]=1;
        for(int i=3;i<=n;i++){
            dp[i] +=dp[i-3];
        }
        for(int i=5;i<=n;i++){
            dp[i] +=dp[i-5];
        }
        for(int i=10;i<=n;i++){
            dp[i] +=dp[i-10];
        }
        // for(int i=1;i<=20;i++)
        // {
        //     cout<<dp[i]<<" ";
        // }
        // cout<<endl;
    	return dp[n];
    }