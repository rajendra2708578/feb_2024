


//this code is functional code no header files or main are inlcuded in it.

 class Solution
{
    public:
        //User function Template for C++
        int solve(int index,int time,vector<int>&price,vector<vector<int>>&dp)
        {
            if(time==4)
            return 0;
            if(index>=price.size())
            {
                if(time>=4)
                return 0;
                else if(time%2==0)
                return 0;
                else
                return -1e9;
            }
            if(dp[index][time]!=-1)
            return dp[index][time];
            int total=0;
            if(time%2==0)
            {
                int a=solve(index+1,time+1,price,dp)-price[index];
                int b=solve(index+1,time,price,dp);
                total=max(total,max(a,b));
            }
            else
            {
                int a=solve(index+1,time+1,price,dp)+price[index];
                int b=solve(index+1,time,price,dp);
                total=max(total,max(a,b));
            }
            return dp[index][time]=total;
        }
        int maxProfit(vector<int>&price){
            //Write your code here..
            vector<vector<int>>dp(price.size()+1,vector<int>(5,-1));
            return solve(0,0,price,dp);
        }
};