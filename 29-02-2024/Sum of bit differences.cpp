


// this is functional code no header files or main are not included in it.


#define ll long long int
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    vector<ll>zero(26,0),one(26,0);
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<=20;j++)
	        {
	            ll val=(1<<j);
	            if((arr[i]&val)>=1)
	            one[j]+=1;
	            else
	            zero[j]+=1;
	        }
	    }
	    ll sum=0;
	    for(int i=0;i<26;i++)
	    {
	        sum+=(zero[i]*one[i]);
	    }
	    return sum*2;
	    
	}
};