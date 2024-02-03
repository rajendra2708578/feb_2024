


// this code contain only the functional code no header files or main function are included


class Solution {
public:
    int solve(int index,vector<int>&arr,int k,vector<int>&dp)
    {
        if(index>=arr.size())
        {
            
            return 0;
        }
        if(dp[index]!=-1)
        return dp[index];
        int value=0,maxv=0,n=arr.size(),count=1;
        for(int i=index;i<index+k && i<n;i++)
        {
            maxv=max(maxv,arr[i]);
            // cout<<"value of maxv "<<maxv<<endl;
        value=max(value,solve(i+1,arr,k,dp)+
            maxv*(count));
            count++;
        }
        return dp[index]=value;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n+1,-1);
        return solve(0,arr,k,dp);
    }
};