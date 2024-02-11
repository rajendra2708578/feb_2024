





 vector<int> largestDivisibleSubset(vector<int>& nums) {
     int n=nums.size();
     vector<int>dp(n+1,1);
     unordered_map<int,int>mp;
     sort(nums.begin(),nums.end());
     for(int i=0;i<n;i++)
     {
         mp[i]=i;
         for(int j=0;j<i;j++)
         {
             if(nums[i]%nums[j]==0 && 1+dp[j]>dp[i])
             {
                 dp[i]=dp[j]+1;
                 mp[i]=j;
             }
         }
     }
     int ans=-1,index=-1;
     for(int i=0;i<n;i++)
     {
         if(dp[i]>ans)
         {
             ans=dp[i];
             index=i;
         }
     }
     vector<int>anss;
     anss.push_back(nums[index]);
     while(mp[index]!=index)
     {
         index=mp[index];
         anss.push_back(nums[index]);
     }
     reverse(anss.begin(),anss.end());
     return anss;
    }