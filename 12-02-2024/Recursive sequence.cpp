


// this code contain only the functional code no header files or main function are not included.

#define ll long long int
const int mod=1e9+7;
class Solution{
public:
    long long sequence(int n){
        // code here
        vector<ll>dp(n+1,0);
        ll count=1;
        for(int i=1;i<=n;i++)
        {
            ll ans=1;
            for(int j=0;j<i;j++)
            {
                ans=(ans*count)%mod;
                count++;
            }
            dp[i]=ans%mod;
        }
        ll sum=0;
        for(int i=1;i<=n;i++)
        {
            // cout<<dp[i]<<" ";
            sum=(sum+dp[i])%mod;
        }
        // cout<<endl;
        return sum;
    }
};